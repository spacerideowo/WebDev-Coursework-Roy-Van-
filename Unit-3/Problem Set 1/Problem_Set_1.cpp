#include <iostream>
using namespace std;

int main(){
    int a, b, result;
    cout << "Enter a positive integer a: \n";
    cin >> a;
    cout << "Enter another positive integer b: \n";
    cin >> b;

    for(int i = a; i > 0; i--){ // a is the greatest POSSIBLE factor for both
        if((a % i == 0) && (b % i == 0)){
            result = i; // i is undefined outside of the for loop, therefore I use 'result' to store the value of i
            break;
        }
    }
    cout << "The greatest common factor is " << result << ".\n";
    return 0;
}
