/*
* WAP to explain the use of protected data in private inheritance */

#include<iostream>
#include<stdlib.h>
using namespace std;
class base { //* base class
    protected:
        int num1;
};
class derived:private base {
    int num2;
    public:
        void fun() {
            num1=10;
            num2=20;
            cout<<"num1 = "<<num1<<endl<<"num2 = "<<num2;
        }
};
int main() {
    system("cls");
    derived ob;
    ob.fun();
}
