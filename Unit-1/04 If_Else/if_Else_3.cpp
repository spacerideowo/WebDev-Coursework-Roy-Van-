#include <iostream>
using namespace std;

int main()
{
    int hoursWorked;

    cout << "How long have you worked this week? \n";
    cin >> hoursWorked;

    if (hoursWorked <= 40)
        cout << "The weekly salary you will receive is $" << 12*hoursWorked << endl;
    else
        cout << "The weekly salary you will receive is $" << 480+(hoursWorked-40)*18 << endl;

    return 0;
}
