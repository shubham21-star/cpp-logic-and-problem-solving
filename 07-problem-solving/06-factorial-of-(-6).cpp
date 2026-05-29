#include <iostream>
using namespace std;

class factorial {
private:
    int num;

public:

    void getNumber()
    {
        cout << "Enter num: ";
        cin >> num;
    }

    void fact()
    {
        int fact = 1;

        if(num > 0)
        {
            for(int i = 1; i <= num; i++)
                fact *= i;

            cout << "Factorial of " << num << " : " << fact << endl;
        }
        else
        {
            cout << "Invalid Input i.e. Negative Number" << endl;
        }
    }

    void checkNatural()
    {
        if(num > 0)
            cout << "Natural Number" << endl;
        else
            cout << "Not Natural Number" << endl;
    }

    void checkWhole()
    {
        if(num >= 0)
            cout << "Whole Number" << endl;
        else
            cout << "Not Whole Number" << endl;
    }

    void checkPrime()
    {
        if(num <= 1)
        {
            cout << "Not Prime Number" << endl;
            return;
        }

        bool prime = true;

        for(int i = 2; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                prime = false;
                break;
            }
        }

        if(prime)
            cout << "Prime Number" << endl;
        else
            cout << "Not Prime Number" << endl;
    }

    void checkReal()
    {
        cout << "Real Number" << endl;
    }
};

int main()
{
    factorial f;

    f.getNumber();

    f.fact();
    f.checkNatural();
    f.checkWhole();
    f.checkPrime();
    f.checkReal();

    return 0;
}