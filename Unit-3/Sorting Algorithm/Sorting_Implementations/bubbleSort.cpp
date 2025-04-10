#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        bool swapped = false; // Track if any swaps are made in this pass

        for(int j = 0; j < n - i - 1; j++){  // Compare adjacent elements
            if(arr[j] > arr[j + 1]){  // Swap if out of order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true; // A swap was made
            }
        }

        // Early exit if no swaps were made in this pass
        if(!swapped) break;
    }
}

int main() {
    int arr[] = {3, 1, 5, 4, 2};
    int n = sizeof(arr) / sizeof(int); // Number of elements

    bubbleSort(arr, n); // Sort the array

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
