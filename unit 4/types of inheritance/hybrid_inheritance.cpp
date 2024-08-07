/*
* WAP to explain the process of hybrid inheritance */

#include<iostream>
#include<stdlib.h>
using namespace std;
class A {
    protected:
        int n1;
};
class B: virtual public A {
    protected:
        int n2;
};
class C {
    protected:
        int n3;
};
class D:virtual public A {
    protected:
        int n4;
};
class E {
    protected:
        int n5;
};
class F:public B, public C, public D, public E {
    public:
        void fun() {
            cout<<"Enter 5 integers: ";
            cin>>n1>>n2>>n3>>n4>>n5;
            int sum=0;
            sum=n1+n2+n3+n4+n5;
            cout<<"The entered numbers are:"<<endl;
            cout<<"n1 = "<<n1<<"\tn2 = "<<n2<<"\tn3 = "<<n3;
            cout<<"\tn4 = "<<n4<<"\tn5 = "<<n5<<endl<<"Sum = "<<sum;
        }
};
int main() {
    system("cls");
    F ob;
    ob.fun();
}
