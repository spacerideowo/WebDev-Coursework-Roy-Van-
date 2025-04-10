#include <iostream>
#include <cmath>
using namespace std;

int main(){
   float userAge;
   cout << "Please enter an age: ";
   cin >> userAge;

   if(userAge <= 1)
    cout << "The user is an infant\n";
   else if(userAge <= 12)
    cout << "The user is a child\n";
   else if(userAge <=19)
    cout << "The user is an teenager\n";
   else
    cout << "The user is an adult\n";

    return 0;
}
