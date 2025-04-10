#include "secret.h"
#include <iostream>

using namespace std;

char toUpper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}

// Clean string: Remove non-letter characters and convert to uppercase
string cleanString(string s){
    string result = ""; // Store the cleaned string

    for(int i = 0; i < s.length(); i++){
        char c = s[i]; // Extract the current character

        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
            result += toUpper(c); // Convert to uppercase and add to the result string
        }
    }
    return result;
}

// Character shift (Caesar cipher encryption)
char caesarShift(char c, char key){
    int shift = key - 'A';  // Calculate the shift amount
    int newChar = ((c - 'A' + shift) % 26) + 'A';
    return newChar;
}

string caesarEncode(string s, char key) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        result += caesarShift(s[i], key);
    }
    return result;
}

// Calculate decryption key
char findDecodeKey(char key){
    return (26 - (key - 'A')) % 26 + 'A';
}

// Caesar cipher decryption
string caesarDecode(string s, char key){
    char decodeKey = findDecodeKey(key);
    return caesarEncode(s, decodeKey);
}
