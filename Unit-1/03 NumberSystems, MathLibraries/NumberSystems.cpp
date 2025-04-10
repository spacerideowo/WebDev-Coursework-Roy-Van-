#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Define the types of variables
    float x1, x2, y1, y2;

    // Ask users to put in the coordinates of x, y
    cout << "Enter x for the first point ";
    cin >> x1;
    cout << "Enter y for the first point ";
    cin >> y1;
    cout << "Enter x for the second point ";
    cin >> x2;
    cout << "Enter y for the second point ";
    cin >> y2;

    // Apply the formula and return the slope of two points
    cout << "The slope of the line connecting two points is " << (y2-y1)/(x2-x1) << endl;

    return 0;
}
