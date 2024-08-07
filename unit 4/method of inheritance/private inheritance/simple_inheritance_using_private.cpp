/*
* WAP to illustrate the concept of simple inheritance using private inheritance method. The base class data member must be private */

#include<iostream>
#include<stdlib.h>
using namespace std;
class rama { //* base class
    int x;
    public:
        void function() {
            cout<<"Enter the value of x: ";
            cin>>x;
            cout<<"x="<<x<<endl;
        }
};
class hari:private rama { //* derived class
    int y;
    public:
        void data() {
            function(); //* Accessing o base class public member function
            cout<<"Enter the value of y: ";
            cin>>y;
            cout<<"y="<<y<<endl;
        }
};
int main() {
    system("cls");
    hari ob;
    ob.data(); //* Access to derived class member function
}
Output: Enter the value of x: 10
x=10
Enter the value of y: 20
y=20