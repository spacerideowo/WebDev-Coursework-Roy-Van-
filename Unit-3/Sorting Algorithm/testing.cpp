#include <iostream>
using namespace std;

// Quick Sort Function
void quicksort(int arr[], int left, int right) {
    if(left >= right)
        return; // Recursion stops when two pointers meet

    int i = left, j = right, pivot = arr[left];  // Let the first element be pivot
    while(i < j) {
        while(i < j && arr[j] >= pivot)
            j--; // Start scanning from right, find the first element less than pivot
        if(i < j)
            arr[i++] = arr[j]; // Moves the element to arr[left] and increments i

        while(i < j && arr[i] < pivot)
            i++; // Start scanning from left, find the first element less than pivot
        if(i < j)
            arr[j--] = arr[i];  // Moves the element to arr[right] and decrements i
    }
    arr[i] = pivot;  // Place pivot into the right position

    quicksort(arr, left, i - 1);   // Continue sorting the sub-array on the left of the pivot
    quicksort(arr, i + 1, right);  // Continue sorting the sub-array on the right of the pivot
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

// Compare Two Arrays
bool compareArrays(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) return false;
    }
    return true;
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
    quicksort(testArr1, 0, -1); // No elements
    printArray(testArr1, 0);

    cout << "Test 2 (Single Element): ";
    quicksort(testArr2, 0, 0); // Only one element
    printArray(testArr2, 1);

    cout << "Test 3 (Already Sorted): ";
    quicksort(testArr3, 0, 4);
    printArray(testArr3, 5);

    cout << "Test 4 (Reverse Sorted): ";
    quicksort(testArr4, 0, 4);
    printArray(testArr4, 5);

    cout << "Test 5 (Duplicates): ";
    quicksort(testArr5, 0, 4);
    printArray(testArr5, 5);

    // Automated Testing
    int numTests = 5;
    int passedTests = 0;

    int cases[5][5] = {  // 2D Matrix, using 0 for padding
        {3, 1, 2, 5, 4},
        {1, 0, 0, 0, 0},
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {3, 3, 1, 2, 2}
    };

    int lengths[5] = {5, 1, 5, 5, 5}; // Lengths of each test case

    int expected[5][5] = {
        {1, 2, 3, 4, 5},
        {1, 0, 0, 0, 0},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 2, 3, 3}
    };

    for (int i = 0; i < numTests; i++) {
        quicksort(cases[i], 0, lengths[i] - 1);
        if (compareArrays(cases[i], expected[i], lengths[i])) {
            passedTests++;
        }
    }

    cout << "Passed Tests: " << passedTests << " / " << numTests << endl;

    return 0;
}
