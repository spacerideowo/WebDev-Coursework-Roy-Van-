#include <iostream>
using namespace std;

int main(){
    int base = 8;
    for(int i = 0; i < base; i++){
        for(int j = 0; j < base; j++){
            cout << i << j << endl;
        }
    }
    return 0;
}
