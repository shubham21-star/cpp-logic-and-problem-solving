#include <iostream>
using namespace std;

int main() {
    int a,b; //Variable declaration
    cout << "Enter the value of a & b :";
        // Assertion
    // cout << "Enter the value of a & b :"<<endl;

    // cin>>a;  
                cin>> a>> b;
    // cin>>b;   
    a = a+b;
    b = a-b;
    a = a-b;
    cout<< "After swap (no temp): a="<< a<< ",b="<<b;

    int temp = a;
    a = b;
    b = temp;

    cout << "After swap (temp): a=" << a<< ", b=" << b<< endl;
    return 0;
}
 