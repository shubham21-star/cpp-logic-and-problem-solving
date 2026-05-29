#include <iostream>
using namespace std;

class teacher { //base class

    private:
        string name;

    public:
        void read() 
        {
            cout << "He is teaching C++ in the class." << endl;
        }
};

class student : public teacher {    //drived class
    public:
        void sport() 
        {
            cout << "He can play Volleyball and Badminton." << endl;
        }
};

class exam : public teacher {
    public:
        void marks()
        {
            cout << "He score 9.58 SGPA in Semester 1." << endl;  
        }
};

int main()
{
    student s;
    exam e;
    s.sport();
    e.marks();
    e.read();
    s.read();

    return 0;
}