#include <iostream>
#include <cmath>
using namespace std;

const int TERMS = 6;

long long question1c(int);
int question1d(int);
int question1e(int);
int question1f(int);
float question2b(int);
int question2d(int);
float question2f(int);
int question3(int, int, int);
int question4(int, int, int);
int question7(int);

int main(){
    cout << "Question 1c - The first " << TERMS << " terms are: ";
    for(int i = 1; i <= TERMS; i++){
        cout << question1c(i) << " ";
    }

    cout << "\n\nQuestion 1d - The first " << TERMS << " terms are: ";
    for(int i = 1; i <= TERMS; i++){
        cout << question1d(i) << " ";
    }

    cout << "\n\nQuestion 1e - The first " << TERMS << " terms are: ";
    for(int i = 1; i <= TERMS; i++){
        cout << question1e(i) << " ";
    }

    cout << "\n\nQuestion 1f - The first " << TERMS << " terms are: ";
    for(int i = 1; i <= TERMS; i++){
        cout << question1f(i) << " ";
    }

    cout << "\n\nQuestion 2b - The first " << TERMS << " terms are: ";
    for(int i = 1; i <= TERMS; i++){
        cout << question2b(i) << " ";
    }

    cout << "\n\nQuestion 2d - The first " << TERMS << " terms are: ";
    for(int i = 1; i <= TERMS; i++){
        cout << question2d(i) << " ";
    }

    cout << "\n\nQuestion 2f - The first " << TERMS << " terms are: ";
    for(int i = 1; i <= TERMS; i++){
        cout << question2f(i) << " ";
    }

    cout << "\n\nQuestion 3 - The first " << TERMS << " terms are: ";
    for(int i = 1; i <= TERMS; i++){
        cout << question3(i, -3, 1) << " ";
    }

    cout << "\n\nQuestion 4 - The first " << TERMS << " terms are: ";
    for(int i = 1; i <= TERMS; i++){
        cout << question4(i, 2, 1) << " ";
    }

    cout << "\n\nQuestion 7 - The first " << TERMS << " terms are: ";
    for(int i = 1; i <= TERMS; i++){
        cout << question7(i) << " ";
    }
    cout << endl;

    return 0;
}


long long question1c(int n){
    if(n == 1)
        return 2;
    else
        return pow(question1c(n-1), 2) + 2;
}

int question1d(int n){
    if(n == 1)
        return 5;
    else
        return pow(n, 2) - question1d(n-1);
}

int question1e(int n){
    if(n == 1)
        return 4;
    if(n == 2)
        return 2;
    else
        return question1e(n-1) - question1e(n-2);
}

int question1f(int n){
    if(n == 1)
        return 1;
    if(n == 2)
        return 3;
    else
        return question1f(n-1) * question1f(n-2);
}

float question2b(int n){
    if(n == 1)
        return 40;
    else
        return question2b(n-1) / (-2);
}

int question2d(int n){
    if(n == 1)
        return 2;
    else
        return question2d(n-1) * 10;
}

float question2f(int n){
    if(n == 1)
        return 14;
    else
        return question2f(n-1) + 0.5;
}

int question3(int n, int d, int t1){
    if(n == 1)
        return 1;
    else
        return question3(n-1, d, t1) + d;
}

int question4(int n, int r, int t1){
    if(n == 1)
        return 1;
    else
        return question4(n-1, r, t1) * r;
}

int question7(int n){
    if(n == 1)
        return 7;
    if(question7(n-1) % 2 == 0)
        return question7(n-1) / 2;
    else
        return 3 * question7(n-1) + 1;
}
