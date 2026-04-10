#include <iostream>
using namespace std;

void factorial() {   
    int fact = 1;
    for(int i = 1; i <= 6; i++) {
        fact = fact * i;
    }
    cout << "Factorial of 6 is: " << fact << endl;  

}

int main() {
    factorial();   
    return 0;
}

#include <iostream>
using namespace std;

int factorials() {  
    int facts = 1;
    for(int i = 1; i <= 6; i++) { 
        facts = facts * i;
    }
    return facts;
}

int main() {
    cout << "Factorial of 6 is: " << factorials() << endl;
    return 0;
}