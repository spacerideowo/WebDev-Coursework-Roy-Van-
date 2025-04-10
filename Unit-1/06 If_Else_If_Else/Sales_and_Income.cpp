#include <iostream>
using namespace std;

int main(){
    float monthlySales;
    cout << "Enter your total monthly sales: ";
    cin >> monthlySales;

    //  The income is divided into six zones, with increasing income rates.
    if(monthlySales < 10000)
        cout << "Your income is $" << 200 + 0.03 * monthlySales << endl;
    else if(monthlySales < 20000)
        cout << "Your income is $" << 250 + 0.05 * monthlySales << endl;
    else if(monthlySales < 30000)
        cout << "Your income is $" << 300 + 0.09 * monthlySales << endl;
    else if(monthlySales < 40000)
        cout << "Your income is $" << 325 + 0.12 * monthlySales << endl;
    else if(monthlySales < 50000)
        cout << "Your income is $" << 350 + 0.14 * monthlySales << endl;
    else
        cout << "Your income is $" << 375 + 0.16 * monthlySales << endl;

    return 0;
}
