#include <iostream>
using namespace std;

#define MAX 5
    int stack[MAX];
    int top = -1;

    void push(int value) 
    {
        if (top == MAX - 1) 
        {
            cout << "Stack Overflow" << endl;
        } 
        else 
        {
            stack[++top] = value;
            cout << value << " pushed into stack" << endl;
        }
    }

    void pop() 
    {
        if (top == -1) 
        {
            cout << "Stack Underflow" << endl;
        } 
        else 
        {
            cout << stack[top--] << " popped from stack" << endl;
        }
    }

    void peek() 
    {
        if (top == -1) 
        {
            cout << "Stack is Empty" << endl;
        } 
        else 
        {
            cout << "Top element is " << stack[top] << endl;
        }
    }

    void display() 
    {
        if (top == -1) 
        {
            cout << "Stack is Empty" << endl;
        } 
        else 
        {
            cout << "Stack elements are: ";
            for (int i = top; i >= 0; i--) 
            {
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }


int main() {
    
    cout << "\n=======PUSH=======\n" ;
    push(10);
    push(20);
    push(30);
    display();

    cout << "\n=======PEEk=======\n" ;
    peek();
    display();

    cout << "\n=======POP =======\n" ;
    pop();
    display();

    return 0;
}