#ifndef ARRAYLIST_H_INCLUDED
#define ARRAYLIST_H_INCLUDED

bool search_unsorted(int value, int arr[], int length); // Note: this should be O(n)
bool search_sorted(int value, int arr[], int length); // Note: this should be O(log(n))
bool test_search_unsorted();
// 5-6 test cases that have been hard-coded (the arrays, searchValue, and expected result (true/false) have all been pre-coded)
bool test_search_sorted();
// 5-6 test cases that have been hard-coded (the arrays, searchValue, and expected result (true/false) have all been pre-coded)


#endif // ARRAYLIST_H_INCLUDED
