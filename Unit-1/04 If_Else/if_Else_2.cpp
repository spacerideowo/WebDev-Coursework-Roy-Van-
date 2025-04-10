#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int inputYear;

    cout << "Ender a year: \n";
    cin >> inputYear;

    if ((inputYear % 400 == 0) || ((inputYear % 4 == 0) && (inputYear % 100 != 0)))
        cout << inputYear << " is a leap year.\n";
    else
        cout << inputYear << " is not a leap year.\n";

    return 0;

}
