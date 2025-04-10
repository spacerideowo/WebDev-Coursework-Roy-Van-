#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14159;
// EPSILON represents how close two values needs to be before considering them equal;
const float EPSILON = 0.00001;

int main()
{
    float calculatedPi = 2*asin(1.);

    cout << "Test One: " << (calculatedPi == PI) << endl;

    cout << "Test Two: " << (abs(calculatedPi - PI) < EPSILON);
}
