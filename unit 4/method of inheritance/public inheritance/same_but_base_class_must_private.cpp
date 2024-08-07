/*
* WAP to illustrate the concept of simple inheritance using public inheritance method. The base class data member must be private. */

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
class hari:public rama { //* derived class
    int y;
    public:
        void data() {
            cout<<"Enter the value of y: ";
            cin>>y;
            cout<<"y="<<y<<endl;
        }
};
int main() {
    system("cls");
    hari ob;
    ob.data();
    ob.function();
}
