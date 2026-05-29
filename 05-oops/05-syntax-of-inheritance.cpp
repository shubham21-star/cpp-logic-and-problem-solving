#include <iostream>
using namespace std;

class teacher { //base class

    private:
        string name;

    public:
        void read() 
        {
            cout << "This is base class" << endl;
        }
};

class student : public teacher {    //drived class
    public:
        void sport() 
        {
            cout << "This is derived class" << endl;
        }
};

int main()
{
    student s;
    s.sport();

    return 0;
}