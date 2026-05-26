#include <iostream>
using namespace std;

class Bank {
    public:
        void Bank_detail()
        {
            cout << "======= SBI BANK ======" << endl;  
        }
}b;

class SBI : public Bank{ 

    private:
        string name;

    public:
        void Customer_detail() 
        {
            cout << "Customer Detail = Ram Prasad" << endl;
            cout << "Customer ID = Rampra550" << endl;
            cout << "Account NO. = 46200064550" << endl;
            cout << "IFC Code = ram0046pra550" << endl;
            
        }
}s;

class Ram_prasand : public Bank {    //drived class
    public:
        void my_account() 
        {
            long pass;
            cout << "Enter Password : ";
            cin >> pass;
            if (pass==5500)
            {
                s.Customer_detail();
            }
        }
}r;



int main()
{
    b.Bank_detail();
    r.my_account();

    return 0;
}