#include <iostream>
using namespace std;

int ageplus(int&);

int main(){
    int age = 10;
    cout << "Initial age: " << age << endl;
    ageplus(age);
    cout << "After age: " << age << endl;
    return 0;
}

int ageplus(int &age) {
    age++;
    cout << "Inside age: " << age << endl;
    return age;
}
