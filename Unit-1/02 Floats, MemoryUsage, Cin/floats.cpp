#include <iostream>
using namespace std;

int main()
{
cout << "Integers:" << endl;
cout << "Data Type     Bytes" << endl;
cout << "-------------------" << endl;

cout << "int\t\t" << sizeof(int) << endl;
cout << "char\t\t" << sizeof(char) << endl;
cout << "bool\t\t" << sizeof(bool) << endl;
cout << "short int\t" << sizeof(short int) << endl;
cout << "unsigned int\t" << sizeof(unsigned int) << endl;

cout << "\nFloating-Point:" << endl;
cout << "Data Type     Bytes" << endl;
cout << "-------------------" << endl;

cout << "float\t\t" << sizeof(float) << endl;
cout << "double\t\t" << sizeof(double) << endl;
    return 0;
}
