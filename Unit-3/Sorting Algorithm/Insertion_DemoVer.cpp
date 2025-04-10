#include <iostream>
using namespace std;

// Bubble Sort Function
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if(!swapped) break; // Early exit if no swaps
    }
}

// Print Array
void printArray(int arr[], int n) {
    cout << "{";
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << ", ";
        cout << arr[i];
    }
    cout << "}" << endl;
}

// Check if Sorted, redundant in this testbench
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) return false;
    }
    return true;
}

// Main Function
int main() {
    // Test cases
    int testArr1[0] = {}; // Empty array
    int testArr2[] = {5}; // Single element
    int testArr3[] = {1, 2, 3, 4, 5}; // Already sorted
    int testArr4[] = {5, 4, 3, 2, 1}; // Reverse sorted
    int testArr5[] = {3, 3, 1, 2, 2}; // With duplicates

    // Test each array
    cout << "Test 1 (Empty): ";
    bubbleSort(testArr1, 0);
    printArray(testArr1, 0);

    cout << "Test 2 (Single Element): ";
    bubbleSort(testArr2, 1);
    printArray(testArr2, 1);

    cout << "Test 3 (Already Sorted): ";
    bubbleSort(testArr3, 5);
    printArray(testArr3, 5);

    cout << "Test 4 (Reverse Sorted): ";
    bubbleSort(testArr4, 5);
    printArray(testArr4, 5);

    cout << "Test 5 (Duplicates): ";
    bubbleSort(testArr5, 5);
    printArray(testArr5, 5);

    // Automated Testing
    for (int i = 0; i < numTests; i++) {
        bubbleSort(testCases[i], lengths[i]); // Sort the array
        cout << "Test " << (i + 1) << ": ";
        printArray(testCases[i], lengths[i]); // Print result

        // Check if sorted
        if (isSorted(testCases[i], lengths[i])) {
            passedTests++;
        }
    }

    cout << "Passed Tests: " << passedTests << " / " << numTests << endl;

    return 0;
}
