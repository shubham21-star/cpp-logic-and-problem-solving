#include<iostream>
using namespace std;

// Inheritance
class Person
{
    public:

    string name;
};

// Student class inherited from Person class
class Student : public Person
{
    int rollno;
    int marks[5];
    int total;
    float avg, per;

    public:

    // Constructor
    Student()
    {
        total = 0;
        avg = 0;
        per = 0;
    }

    void getData()
    {
        int count = 0;

        cout<<"Enter Name : ";

        while(!(cin>>name))
        {
            cout<<"Invalid Name! Enter Again : ";

            cin.clear();
            cin.ignore(1000,'\n');
        }

        cout<<"Enter Roll Number : ";

        while(!(cin>>rollno))
        {
            cout<<"Invalid Roll Number! Enter Numbers Only : ";

            cin.clear();
            cin.ignore(1000,'\n');
        }

        while(rollno <= 0)
        {
            cout<<"Invalid Roll Number! Enter Positive Number : ";
            cin>>rollno;
        }

        total = 0;

        for(int i=0;i<5;i++)
        {
            cout<<"Enter Marks of Subject "<<i+1<<" : ";

            while(!(cin>>marks[i]))
            {
                cout<<"Invalid Input! Enter Numbers Only : ";

                cin.clear();
                cin.ignore(1000,'\n');
            }

            while(marks[i] < 0 || marks[i] > 100)
            {
                cout<<"Invalid Marks! Enter Between 0 to 100 : ";

                while(!(cin>>marks[i]))
                {
                    cout<<"Invalid Input! Enter Numbers Only : ";

                    cin.clear();
                    cin.ignore(1000,'\n');
                }
            }

            total = total + marks[i];

            if(marks[i] == 0)
            {
                count++;
            }
        }

        try
        {
            if(count == 5)
            {
                throw "Student Got Zero in All Subjects";
            }
        }

        catch(const char* msg)
        {
            cout<<"\nException : "<<msg<<endl;
        }

        avg = total / 5.0;
        per = (total / 500.0) * 100;
    }

    // Inline Function
    inline void showData()
    {
        cout<<"\nName : "<<name<<endl;
        cout<<"Roll Number : "<<rollno<<endl;

        cout<<"Marks : ";

        for(int i=0;i<5;i++)
        {
            cout<<marks[i]<<" ";
        }

        cout<<endl;

        cout<<"Total : "<<total<<endl;
        cout<<"Average : "<<avg<<endl;
        cout<<"Percentage : "<<per<<"%"<<endl;
    }

    int getTotal()
    {
        return total;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    Student s[10], temp;

    int choice;

    do
    {
        cout<<"\n===== MENU ====="<<endl;
        cout<<"1. Enter Student Data"<<endl;
        cout<<"2. Display Student Data"<<endl;
        cout<<"3. Top 5 Students"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter Choice : ";

        while(!(cin>>choice))
        {
            cout<<"Invalid Choice! Enter Numbers Only : ";

            cin.clear();
            cin.ignore(1000,'\n');
        }

        switch(choice)
        {
            case 1:

                for(int i=0;i<10;i++)
                {
                    cout<<"\nStudent "<<i+1<<endl;

                    s[i].getData();
                }

                break;

            case 2:

                for(int i=0;i<10;i++)
                {
                    s[i].showData();
                }

                break;

            case 3:

                for(int i=0;i<10;i++)
                {
                    for(int j=i+1;j<10;j++)
                    {
                        if(s[j].getTotal() > s[i].getTotal())
                        {
                            temp = s[i];
                            s[i] = s[j];
                            s[j] = temp;
                        }
                    }
                }

                cout<<"\n===== TOP 5 STUDENTS =====\n";

                for(int i=0;i<5;i++)
                {
                    cout<<i+1<<". "
                        <<s[i].getName()
                        <<" - "
                        <<s[i].getTotal()
                        <<endl;
                }

                break;

            case 4:

                cout<<"\nProgram End"<<endl;
                break;

            default:

                cout<<"\nInvalid Choice"<<endl;
        }

    }while(choice != 4);

    return 0;
}