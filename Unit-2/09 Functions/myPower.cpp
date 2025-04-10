#include <iostream>
using namespace std;

int myPower(int, int);

int main(){
    cout << "myPower(2,3)  = " << myPower(2,3) << " (should be 8)" << endl;
    cout << "myPower(-3,3) = " << myPower(-3,3) << " (should be -27)" <<  endl;
    cout << "myPower(5,0)  = " << myPower(5,0) << " (should be 1)" <<  endl;
    cout << "myPower(5,1)  = " << myPower(5,1) << " (should be 5)" <<  endl;
}

int myPower(int a, int b){
    int product = 1;
    for(int i = 0; i <= b - 1; i++){
        product *= a;
    }
    return product;
}
