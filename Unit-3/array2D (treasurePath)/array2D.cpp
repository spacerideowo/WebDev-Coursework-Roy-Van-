#include <iostream>
#include "array2D.h"

using namespace std;

// Function Implementations

void printArr2d(int arr[][NUM_COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < NUM_COLS; j++) {
            cout << arr[i][j];
            if (j < NUM_COLS - 1) cout << ", ";
        }
        cout << endl;
    }
}

// Calculate the sum of all elements in row "rowNum"
int rowSum(int arr[][NUM_COLS], int rowNum, int rows) {
    if (rowNum >= rows) return 0; // Avoid out of boundary
    int sum = 0;
    for (int i = 0; i < NUM_COLS; i++) {
        sum += arr[rowNum][i];
    }
    return sum;
}

// Find the maximum element in row "rowNum"
int rowMax(int arr[][NUM_COLS], int rowNum) {
    int maxVal = arr[rowNum][0];
    for (int i = 1; i < NUM_COLS; i++) {
        if (arr[rowNum][i] > maxVal) {
            maxVal = arr[rowNum][i];
        }
    }
    return maxVal;
}

// Find the maximum value from the three possible sources above (rowNum, columnNum)
int maximumParent(int arr[][NUM_COLS], int rows, int rowNum, int columnNum) {
    if (rowNum == 0) return arr[rowNum][columnNum]; // There is no parent element for row 0

    int maxVal = 0;

    // Top-left
    if (columnNum > 0) {
        if (arr[rowNum - 1][columnNum - 1] > maxVal) {
            maxVal = arr[rowNum - 1][columnNum - 1];
        }
    }

    // Directly above
    if (arr[rowNum - 1][columnNum] > maxVal) {
        maxVal = arr[rowNum - 1][columnNum];
    }

    // Top-right
    if (columnNum < NUM_COLS - 1) {
        if (arr[rowNum - 1][columnNum + 1] > maxVal) {
            maxVal = arr[rowNum - 1][columnNum + 1];
        }
    }

    return maxVal;
}

// Calculate the maximum treasure value
int maximumTreasure(int treasure[][NUM_COLS], int collection[][NUM_COLS], int rows) {
    // Copy the first row
    for (int i = 0; i < NUM_COLS; i++) {
        collection[0][i] = treasure[0][i];
    }

    // Calculate the maximum value row by row
    for (int r = 1; r < rows; r++) {
        for (int c = 0; c < NUM_COLS; c++) {
            collection[r][c] = treasure[r][c] + maximumParent(collection, rows, r, c);
        }
    }

    // Find the maximum of the last row
    int maxTreasure = 0;
    for (int i = 0; i < NUM_COLS; i++) {
        if(collection[rows - 1][i] > maxTreasure){
            maxTreasure = collection[rows - 1][i];
        }
    }

    return maxTreasure;
}
