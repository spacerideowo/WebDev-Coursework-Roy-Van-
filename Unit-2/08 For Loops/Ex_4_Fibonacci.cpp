#include <iostream>
using namespace std;
int main(){
    int t1 = 1, t2 = 2, sum = 0;
    sum += 2;

    while(t2 <= 1000000){
        int t3 = t1 + t2;
        if(t3 % 2 == 0)
            sum += t3;
        t1 = t2;
        t2 = t3;

    }
    cout << sum << endl;
    return 0;
}
