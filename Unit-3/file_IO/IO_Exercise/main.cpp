#include <iostream>
#include <fstream>
#include "statistics.h"

using namespace std;

const int MAX_N = 1000;

int main()
{
    string inFilename = "1000numbers.txt";
    string outFilename = "summary.txt";
    float sampleData[MAX_N];
    int nCount;

    // 1. Obtain user input
    do {
        cout << "Enter a number between 1 and " << MAX_N << ": ";
        cin >> nCount;

        if (nCount < 1 || nCount > MAX_N) {
            cout << "Error: Number out of range. Please try again.\n";
        }
    } while (nCount < 1 || nCount > MAX_N);

    // 2. Load files
    ifstream inFile(inFilename);
    if (!inFile) {
        cout << "Error: Cannot open file.\n";
        return 1;
    }

    for (int i = 0; i < nCount; i++) {
        if (!(inFile >> sampleData[i])) { // when successfully transfer a value, inFile will become true, ! avoids executing if in this case
            cout << "Error: Not enough numbers in file.\n";
            return 1;
        }
    }
    inFile.close();

    // 3. Calculate the statistics
    float maxVal = findMax(sampleData, nCount);
    float minVal = findMin(sampleData, nCount);
    float sum = findSum(sampleData, nCount);
    float avg = findAverage(sampleData, nCount);
    float median = findMedian(sampleData, nCount);

    // 4. Export to files
    ofstream outFile(outFilename);
    if (!outFile) {
        cout << "Error: Cannot create output file.\n";
        return 1;
    }

    outFile << "Maximum: " << maxVal << endl;
    outFile << "Minimum: " << minVal << endl;
    outFile << "Sum: " << sum << endl;
    outFile << "Average: " << avg << endl;
    outFile << "Median: " << median << endl;

    outFile.close();
    cout << "Summary saved to " << outFilename << endl;

    return 0;
}
