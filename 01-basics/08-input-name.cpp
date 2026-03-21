#include <iostream>
using namespace std;

int main() {
    char student[50];

    cout << "Enter your full name: ";
    cin.ignore();            // to clear leftover newline
    cin.getline(student, 50); // allows spaces in name

    cout << "Hello, "<< student<< "! Welcome to C++ Basics."<< endl;

    return 0;
}