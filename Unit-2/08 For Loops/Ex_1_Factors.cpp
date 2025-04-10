#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a value: " << endl;
    cin >> n;

    for(int(i) = 1; i <= n; i++){
        if(n % i == 0)
            if(n==i)
                cout << i;
            else
                cout << i << ", " ;
    }
    return 0;

}
