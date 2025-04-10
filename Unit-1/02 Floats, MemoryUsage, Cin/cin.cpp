#include <iostream>
using namespace std;
/*
int main()
{
int n;
cout << "Which term in the arithmetic sequence: \"11,15,19,23,...\"do you want to find? (input nth term) "; // Asking users for their requests.
cin >> n;
cout << "t_" << n << "=" << 11+4*(n-1) << endl; // Processing & output the result.
}
*/

int main()
{
int n;
cout << "You want to find the sum of first nth term in the arithmetic series \"2+5+8+11+...\"? "; // Asking users for their requests.
cin >> n;
cout << "Sum of first " << n << " terms =" << n*(3*n+1)/2 << endl; // Processing & output the result.
}

