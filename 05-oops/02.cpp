#include <iostream>
#include <string>
using namespace std;

class FB {
private:
    string saved_name = "shubham";
    string saved_pass = "2323";

public:
    int ages();
    void login(string user, string pass, int a);
};

int FB::ages() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    return age;
}

void FB::login(string user, string pass, int a) {
    if (user == saved_name && pass == saved_pass && a > 18) {
        cout << "\nLogin Successfully";
    }
    else {
        cout << "\nAccess Denied";
        }
    }


int main() {
    FB c;
    string name, pass;
    cout << "Enter user name: ";
    cin >> name;
    cout << "Enter password: ";
    cin >> pass;
    
    int age = c.ages();
    c.login(name, pass, age);

    return 0;
}