#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter integer a:\n";
    cin >> a;
    cout << "Enter integer b:\n";
    cin >> b;

    int f0;
    int f1 = 0;
    int fn = 1; // The value of these variables will move up every time

    int f_a, f_a_1, f_a_n; // Variables created for a > b; f_a is term_n, f_a_1 is term_(n-1)

    if(a <= b){
        for(int i = 0; i <= b; i++){    // If a <= b
            f0 = f1;
            f1 = fn;
            if(i == a){
                cout << fn;
            }else if(i > a){
                cout << ", " << fn;
            }
            fn = f0 + f1;
        }
    }else if(a > b){                    // If a > b
        for(int i = -1; i <= a; i++){
            f0 = f1;
            f1 = fn;
            if(i == a - 1){
                f_a_n = fn; // Get f_(n-1) in the sequence
            }
            else if(i == a){
                f_a_1 = fn; // Get f_n in the sequence
            }
            fn = f0 + f1;
        }

        cout << f_a_n;
        for(int i = 0; i <= a - b - 1; i++){
            f_a = f_a_1;
            f_a_1 = f_a_n;
            f_a_n = f_a - f_a_1;    // f_(n-2) = f_n - f_(n-1)
            cout << ", " << f_a_n;
        }
    }
    return 0;
}
