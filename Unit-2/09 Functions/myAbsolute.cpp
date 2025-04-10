#include <iostream>
using namespace std;

int myAbsolute(int);

int main(){
    cout << "myAbsolute(25)  = " << myAbsolute(25)  << endl; // should be 25
    cout << "myAbsolute(-25) = " << myAbsolute(-25) << endl; // should be 25
    return 0;
}

int myAbsolute(int a){
    if(a < 0){
        a = -a; return a;
    }
    else return a;
}
