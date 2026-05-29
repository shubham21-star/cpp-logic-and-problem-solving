#include <iostream>
using namespace std;

class University {
    public:
        void University_name()
        {
            cout << "======= SAGE UNIVERSITY BHOPAL ======\n\n" << endl;  
        }
};

class Course : public University{ 

    public:
        void course_detail() 
        {
            cout << "1. B.tech" << endl;
            cout << "2. BBA" << endl;
            cout << "3. MBA" << endl;
            cout << "4. M.tech\n\n" << endl;
            
        }
};

class Faculty : public Course {   
    public:
        void faculty_detail() 
        {
            cout << "1. Total no. faculty in B.tech : 19" << endl;
            cout << "2. Total no. faculty in BBA : 17" << endl;
            cout << "3. Total no. faculty in MBA : 15" << endl;
            cout << "4. Total no. faculty in M.tech : 14" << endl;
            cout << "Total NO. of faculty : 75\n\n" << endl;

        }
};

class Student : public Faculty {    
    public:
        void Student_detail() 
        {
            cout << "1. Total no. Student in B.tech : 640" << endl;
            cout << "2. Total no. Student in BBA : 745" << endl;
            cout << "3. Total no. Student in MBA : 558" << endl;
            cout << "4. Total no. Student in M.tech : 644" << endl;
            cout << "Total NO. of Student : 1525\n\n" << endl;

        }
}s;



int main()
{
    s.University_name();
    s.course_detail();
    s.faculty_detail();
    s.Student_detail();
    return 0;
}