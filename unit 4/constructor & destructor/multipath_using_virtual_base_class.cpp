/*
* WAP to illustrate the concept of multipath inheritance using virtual base class */

#include<iostream>
#include<stdlib.h>
using namespace std;
class A {
    protected:
        int n1;
};
class B:virtual public A {
    protected:
        int n2;
};
class C:virtual public A {
    protected:
        int n3;
};
class D:virtual public A {
    protected:
        int n4;
};
class E:public B, public C, public D {
    int n5;
    public:
        int fun() {
            cout<<"Enter 5 integers: ";
            cin>>n1>>n2>>n3>>n4>>n5;
            int sum=0;
            sum=n1+n2+n3+n4+n5;
            cout<<"Sum="<<sum;
        }
};
int main() {
    system("cls");
    E obj;
    obj.fun();
}
// Output: Enter 5 integers: 3 4 5 6 7
// Sum=25