/*
* WAP to illustrate the concept of simple inheritance using public inheritance method  */

#include<iostream>
#include<stdlib.h>
using namespace std;
class rama { //* base class
    public:
        int x;
};
class hari:public rama { //* derived class
    public:
        int y;
};
int main() {
    system("cls");
    hari ob;
    cout<<"Enter the value of x & y: ";
    cin>>ob.x; //* Access to base class data member
    cin>>ob.y; //* Access to derived class data member
    cout<<"x="<<ob.x<<"\ty="<<ob.y;
}
