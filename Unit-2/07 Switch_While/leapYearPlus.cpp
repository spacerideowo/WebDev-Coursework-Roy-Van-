#include <iostream>
using namespace std;
int main(){
    int y1, y2;

    cout << "Enter the initial year: \n";
    cin >> y1;
    cout << "Enter the end year: \n";
    cin >> y2;

    cout << "The leap years between " << y1 << " and " << y2 << " are: \n";

    // Set the initial year to y-1, so that the *first year* within
    // the range WILL go through leap year check.
    y1 = y1 - 1;


    /*  First cycle: if y1 input is 2000:
        Is ((2000 - 1) + 1) TRUE about CONDITIONS?

        Second cycle:
        Is ((2000 - 1) + 2 * 1) TRUE about CONDITIONS?
    */
    while(++y1 <= y2){
        if(y1 % 400 == 0 || (y1 % 4 == 0 && y1 % 100 != 0))
            cout << y1 << endl;
    }
    return 0;
}
