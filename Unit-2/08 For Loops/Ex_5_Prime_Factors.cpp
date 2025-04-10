#include <iostream>
using namespace std;

int main()
{
    int largestPrime = 1;             // Stores the largest prime factor found when the program is executing
    int current_n = 2;                // Factors to check
    unsigned long long testNum = 600851475143; // The number needs to be factored

    // Loop continues while testNum is greater than 1
    while(testNum > 1){
        if(testNum % current_n == 0){ // If current_n is a factor of testNum
            largestPrime = current_n; // Update largest prime factor
            testNum /= current_n;     // Divide testNum by the current factor
        }
        else{
            current_n++;              // Otherwise, move to the next factor
        }
    }
    cout << "The largest prime is: " << largestPrime << endl;
    return 0;
}
