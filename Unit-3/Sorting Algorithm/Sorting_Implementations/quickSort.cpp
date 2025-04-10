#include <iostream>
using namespace std;

void quicksort(int arr[], int left, int right){
    if(left >= right)
        return; // Recursion stops when two pointers meet

    int i = left, j = right, pivot = arr[left];  // Let the first element be pivot
    while(i < j){
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

int main(){
    int arr[] = {3, 1, 5, 4, 2};
    int n = sizeof(arr) / sizeof(int); // # of elements in the array

    quicksort(arr, 0, n - 1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
