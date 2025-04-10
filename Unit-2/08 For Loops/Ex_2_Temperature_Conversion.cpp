#include <iostream>
using namespace std;

int main(){
    for(double F = 20; F <= 20 + 4 * 19; F+=4){
        cout << F << " degrees Fahrenheit = " << (5.0 / 9.0) * (F - 32.0) << " degrees Celsius.\n";
    }
    return 0;
}
