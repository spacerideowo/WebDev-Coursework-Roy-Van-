#include <iostream>
#include <cmath>
using namespace std;

int main(){

    // Declare a and r in the type of float
    float a = 1728.896400;
    float r = sqrt(sqrt(a));

    /* The following calculation is equivalent to using double "sqrt"
    float r2 = pow(a,0.25);*/

    // Due to the limitation of float's precision, computer rounds the number
    // "Double" has a higher precision
    cout << "The fourth root of " << a << " is " << r << endl;

    return 0;
}
