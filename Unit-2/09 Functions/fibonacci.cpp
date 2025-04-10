#include <iostream>
using namespace std;

char changeCase(char);


int main(){
    cout << "c -> " << changeCase('c') << endl;
    cout << "Z -> " << changeCase('Z') << endl;
    cout << "m -> " << changeCase('m') << endl;
    cout << "6 -> " << changeCase('6') << endl;
}

char changeCase(char c) {
    // Check if c is an uppercase letter
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    // Check if c is a lowercase letter
    else if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    // If c is not an alphabet character, return it unchanged
    return c;
}

