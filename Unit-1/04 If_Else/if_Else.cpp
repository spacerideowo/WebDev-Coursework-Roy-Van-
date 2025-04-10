#include <iostream>
using namespace std;

int main()
{
    int userInput_1,userInput_2;

    cout << "Enter a number: \n";
    cin >> userInput_1;

    cout << "Enter a different number: \n";
    cin >> userInput_2;

    if (userInput_1 > userInput_2)
            cout << "The first number is greater.\n";
    else
            cout << "The first number is smaller.\n";

    return 0;

}
