#include<iostream>
using namespace std;

int main (){
    int a=10;
    // cout << &a << endl;

    // pointer
    int x=50;
    int* y = &x;

    cout << x <<"\n";
    cout << y <<"\n";
    cout << &x <<"\n";
    cout << &y <<"\n";   
    cout << *y <<"\n";
    // cout << x <<"\n";

    return 0;
}