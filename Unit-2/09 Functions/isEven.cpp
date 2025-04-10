#include <iostream>
using namespace std;

bool isEven(int a) {
    if (a % 2 == 0)
        return true;
    else
        return false;
}

int main() {
    cout << isEven(11);
    return 0;
}
