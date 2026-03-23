#include <iostream>
using namespace std;

int add (int a, int b); // Function declartion

int add(int a, int b) // Function defination
{
    cout << "\nEnter the value of a & b : \n";
    cin >> a >> b;
    cout << "\nAddition of a & b : \n"<< a+b;
}

int main()
{
    add(10,20); // Calling of function .....

    return 0;
}