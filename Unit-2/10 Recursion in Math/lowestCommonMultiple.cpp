#include <iostream>
using namespace std;

int lcm(int, int, int = 1);

int main(){
    int num1, num2;
    cout << "Please enter two numbers: ";
    cin >> num1 >> num2;

    int result = lcm(num1, num2);
    cout << "The LCM of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}

int lcm(int a, int b, int multiple) {
    if (multiple % a == 0 && multiple % b == 0) {
        return multiple;
    }
    return lcm(a, b, multiple + 1);
}

