#include <iostream>
#include <fstream>
#include "secret.h"

using namespace std;

int main() {
    string inputFilename = "input.txt";
    string outputFilename = "output.txt";
    ifstream inFile(inputFilename);  // Open input file
    ofstream outFile(outputFilename); // Open output file

    // Error handling: checking if file is opened properly
    if (!inFile) {
        cout << "Error: Cannot open " << inputFilename << " for reading.\n";
        return 1;
    } else {
        cout << "Successfully opened input file.\n";
    }

    if (!outFile) {
        cout << "Error: Cannot open " << outputFilename << " for writing.\n";
        return 1;
    } else {
        cout << "Successfully opened output file.\n";
    }

    string text;
    char key;

    // Read the string to encode/decode from the first line of file
    getline(inFile, text);

    cout << "[DEBUG] Read text: " << text << endl;

    // Read the character from second line as key
    inFile >> key;

    cout << "[DEBUG] Read key: " << key << endl;

    inFile.close();

    // Cleaning string, change to upper case
    string cleanedText = cleanString(text);

    // Encoding
    string encryptedText = caesarEncode(cleanedText, key);

    // Decoding
    string decryptedText = caesarDecode(encryptedText, key);

    // Writing the outcomes into output file
    outFile << "Original: " << cleanedText << endl;
    outFile << "Encrypted: " << encryptedText << endl;
    outFile << "Decrypted: " << decryptedText << endl;
    outFile.close();

    cout << "Processing complete. Check " << outputFilename << " for results.\n";

    return 0;
}
