#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                // swap(arr[i], arr[j]);
            }
        }
    }
}

int main(){
    int arr[] = {5, 5, 4, 2, 5, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]); // # of elements in the array
    selectionSort(arr, n);

    // Print the resulting array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
