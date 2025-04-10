#include <iostream>
using namespace std;

int revDigs(int);

int main(){
    cout << "revDigits(0) = " << revDigs(0) <<   " (should be 0)" << endl;
    cout << "revDigits(2) = " << revDigs(2) <<   " (should be 2)" << endl;
    cout << "revDigits(23) = " << revDigs(23) <<   " (should be 32)" << endl;
    cout << "revDigits(1234) = " << revDigs(1234) <<   " (should be 4321)" << endl;
    cout << "revDigits(5005) = " << revDigs(5005) <<   " (should be 5005)" << endl;
}

int revDigs(int remaining){
    int revNum = 0;
    while(remaining > 0){
        revNum = 10 * revNum + remaining % 10;
        remaining /= 10;
    }
    return revNum;
}
