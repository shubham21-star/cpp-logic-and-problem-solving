// # include <iostream>
// using namespace std;
// class calculater
// {
// private:
//     int a;
//     int b;
//     int c;
// public:
//     int add()
//     {}
//     int sub();
//     int mult();
//     int div();
//     int mod();
// };
// int main(){
//     calculater ob;
//     ob.add();
//     ob.sub();
//     ob.mult();
//     ob.div();
//     ob.mod();
//     return;
// }
# include <iostream>
using namespace std;
class calculater
{
private:
    int x;
    int y;
    int z;
public:
    void add(int a, int b);
    void sub(int a, int b);
    void mult(int a, int b);
    void divi(int a, int b);
    void mod(int a, int b);
};
void calculater :: add( int a, int b)
    {
        int c;
        c = a+b;
        cout<<"\nresult is "<<c;
        
    }
void calculater :: sub(int a,int b){
        int c;
        c = a-b;
        cout<<"\nresult is "<<c;
        
    }
void calculater :: mult(int a,int b){
        int c;
        c = a*b;
        cout<<"\nresult is "<<c;
        
    }
void calculater :: divi(int a,int b){
        int c;
        c = a/b;
        cout<<"\nresult is "<<c;
        
    }
void calculater :: mod(int a,int b){
        int c;
        c = a%b;
        cout<<"\nresult is "<<c;
        
    }
int main(){
    calculater ob;
    ob.add(3,6);
    ob.sub(7,5);
    ob.mult(2,8);
    ob.divi(8,4);
    ob.mod(5,2);
    return 0;
}