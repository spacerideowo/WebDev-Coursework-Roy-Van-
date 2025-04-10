#include <iostream>
using namespace std;

int sumDigits(int);

int main(){
    cout << "sumDigits(0) = " << sumDigits(0) <<  " (should be 0)" << endl;
    cout << "sumDigits(5) = " << sumDigits(5) <<   " (should be 5)" << endl;
    cout << "sumDigits(5000) = " << sumDigits(5000) <<   " (should be 5)" << endl;
    cout << "sumDigits(33333) = " << sumDigits(33333) <<   " (should be 15)" << endl;
}

int sumDigits(int a){
    int sum = 0;
    while(a > 0){
        sum += a % 10;
        a /= 10;
    }
    return sum;
}
