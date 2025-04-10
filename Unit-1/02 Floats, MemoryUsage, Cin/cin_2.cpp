#include <iostream>
#include <cmath> // Import the Math library for C++
using namespace std;
int main()
{
int n;
cout << "You want the nth term in the geometric sequence \"3,6,12,24,...\" "; // Requesting n from user.
cin >> n;
cout << "t_" << n << "=" << 3*pow(2,n-1) << endl; // pow(base,exponent);
}
