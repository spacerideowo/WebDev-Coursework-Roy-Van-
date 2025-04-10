#include <iostream>
#include "arrayList.h"

using namespace std;

int main(){
    bool result_unsorted = test_search_unsorted();
    if (result_unsorted == true){
        cout << "Testing search_unsorted: Passed" << endl;
    } else {
        cout << "Testing search_unsorted: Failed" << endl;
    }

    bool result_sorted = test_search_sorted();
    if (result_sorted == true){
        cout << "Testing search_sorted: Passed" << endl;
    } else {
        cout << "Testing search_sorted: Failed" << endl;
    }

    return 0;
}
