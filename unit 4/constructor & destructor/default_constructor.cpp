/*
* WAP to explain the working of default constructor in inheritance */

#include<iostream>
#include<stdlib.h>
using namespace std;
class base {
    public:
        base() {
            cout<<"Base Class Constructor"<<endl;
        }
        ~base() {
            cout<<"Base Class Destructor"<<endl;
        }
};
class derived:public base {
    public:
        derived() {
            cout<<"Derived Class Constructor"<<endl;
        }
        ~derived() {
            cout<<"Derived Class Destructor"<<endl;
        }
};
int main() {
    system("cls");
    derived obj;
}
