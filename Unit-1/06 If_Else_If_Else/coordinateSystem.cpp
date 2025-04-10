#include <iostream>
using namespace std;

int main(){
    // Setup two variables in the type of float
    // They will store x and y coordinates from user
    float x, y;

    // Prompt user to enter a random coordinate
    cout << "Enter the x coordinate of a random point: \n";
    cin >> x;
    cout << "Enter the y coordinate of a random point: \n";
    cin >> y;

    // Classify the point as one of the seven probabilities
    /*  at the origin
        on the x-axis (don¡¯t include the origin)
        on the y-axis (don¡¯t include the origin)
        in quadrant 1
        in quadrant 2
        in quadrant 3
        in quadrant 4
    */

    if(x == 0 && y == 0)
        cout << "The point is at the origin.\n";
    else if(y == 0)
        cout << "The point is on the x-axis.\n";
    else if(x == 0)
        cout << "The point is on the y-axis.\n";
    else if(x > 0 && y > 0)
        cout << "The point is in quadrant 1.\n";
    else if(x < 0 && y > 0)
        cout << "The point is in quadrant 2.\n";
    else if(x < 0 && y < 0)
        cout << "The point is in quadrant 3.\n";
    else
        cout << "The point is in quadrant 4.\n";

    return 0;
}
