#include <iostream>

using namespace std;

int main()
{
    int x; //only use "int x =" once, after that only use "x= "
    char c;
    int n;

    // Question 0 (example)
    x = 1 + 1;
    cout<<"Question 0:\t"<< x <<endl;

    // Question 1
    x = 99 / 20;
    cout << "Question 1:\t" << x << endl;

    // Question 2
    x = 27 % 10;
    cout << "Question 2:\t" << x << endl;

    // Question 3
    x = 100 / 10 / 2;
    cout << "Question 3:\t" << x << endl;

    // Question 4
    x = true;
    cout << "Question 4:\t" << x << endl;

    // Question 5
    x = false;
    cout << "Question 5:\t" << x << endl;

    // Question 6
    x = (99 == 99);
    cout << "Question 6:\t" << x << endl;

    // Question 7
    x = 'a';
    cout << "Question 7:\t" << x << endl;

    // Question 8
    x = 'z' - 'a';
    cout << "Question 8:\t" << x << endl;

    // Question 9
    c = 100;
    cout << "Question 9:\t" << c << endl;

    // Question 10
    n = 277;
    x = (n / 2) * (n / 2);
    cout << "Question 10:\t" << x << endl;

    return 0;
}
