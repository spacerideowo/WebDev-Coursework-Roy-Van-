#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){  // The first element is already sorted
        int key = arr[i]; // The element currently sorting
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){
    int arr[] = {5, 5, 4, 2, 5, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]); // # of elements in the array
    insertionSort(arr, n);

    // Print the resulting array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
