#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // o: original; the "radioactive isotope" starts with 100 grams.
    int o = 100;

    // Define the constant E that will be used in the calculation, in the type of float
    const float E = 2.7182818;

    // r: remaining; declare r to store the result after calculations
    float r = o*pow(E,-0.00012*1000);

    // Output the result r
    cout << "The amount of radioactive material remaining after 1000 years is " << r << " grams" << endl;

    return 0;
}
