#include <iostream>
#include "arrayList.h"

using namespace std;

// Linear search for unsorted array
bool search_unsorted(int value, int arr[], int length){
    for (int i = 0; i < length; i++){
        if (arr[i] == value){
            return true;
        }
    }
    return false;
}

// Binary search for sorted array
bool search_sorted(int value, int arr[], int length){
    int left = 0;
    int right = length - 1;
    while (left <= right){
        int mid = left + (right - left) / 2;
        if (arr[mid] == value){
            return true;
        }
        else if (arr[mid] < value){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return false;
}

// Test cases for unsorted search
bool test_search_unsorted(){
    int arr1[] = {3, 1, 4, 1, 5, 9};
    bool case1 = search_unsorted(4, arr1, 6);
    bool case2 = !search_unsorted(2, arr1, 6);  // 2 is not in the array
    bool case3 = search_unsorted(9, arr1, 6);
    int arr2[] = {2, 8, 6, 5, 2, 3, 0};
    bool case4 = search_unsorted(0, arr2, 7);
    bool case5 = search_unsorted(2, arr2, 7);
    bool case6 = !search_unsorted(9, arr2, 7);  // 9 is not in the array
    return case1 && case2 && case3 && case4 && case5 && case6;
}

// Test cases for sorted search
bool test_search_sorted(){
    int arr3[] = {1, 2, 3, 4, 5, 6};
    bool case1 = search_sorted(4, arr3, 6);
    bool case2 = !search_sorted(7, arr3, 6);  // 7 is not in the array
    bool case3 = search_sorted(1, arr3, 6);
    int arr4[] = {2, 8, 100, 101, 110, 200, 3000};
    bool case4 = search_sorted(101, arr4,7);
    bool case5 = !search_sorted(3, arr4, 7);  // 3 is not in the array
    bool case6 = search_sorted(3000, arr4, 7);
    return case1 && case2 && case3 && case4 && case5 && case6;
}
