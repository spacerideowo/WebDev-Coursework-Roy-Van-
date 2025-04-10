#include "statistics.h"

float findMax(float arr[], int size) {
    float maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

float findMin(float arr[], int size) {
    float minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}

float findSum(float arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

float findAverage(float arr[], int size) {
    return findSum(arr, size) / size;
}

void bubbleSort(float arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

float findMedian(float arr[], int size) {
    bubbleSort(arr, size);

    if (size % 2 == 1) {
        return arr[size / 2]; // Odd number elements, return the value in the middle
    } else {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0; // Even number elements, return the mean of two values in the middle
    }
}
