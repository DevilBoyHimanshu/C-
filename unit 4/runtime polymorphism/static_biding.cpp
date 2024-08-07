/*
* WAP to show the effect of static binding code */

#include<iostream>
#include<stdlib.h>
using namespace std;
class one {
    int n1;
    public:
    void fun() {
        n1=5;
        cout<<endl<<"n1 = "<<n1<<endl;
    }
};
class two:public one {
    int n2;
    public:
    void fun() {
        n2=10;
        cout<<endl<<"n2 = "<<n2<<endl;
    }
};
int main() {
    system("cls");
    one *ptr; //* base class object pointer
    one ob1;
    ptr=&ob1;
    ptr->fun();
    two ob2;
    ptr=&ob2;
    ptr->fun();
}