#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int x1 = 7;
int x2 = 3;
int y1 = 12;
int y2 = 9;
float result = sqrt(pow(x2-x1,2)+pow(y2-y1,2)); // d=sqrt[(x2-x1)^2+(y2-y1)^2]
cout << "Distance between (7,12) and (3,9) is " << result << endl;
}
