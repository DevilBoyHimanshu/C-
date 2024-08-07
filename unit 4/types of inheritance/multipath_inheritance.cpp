/*
* WAP to illustrate the concept of multipath inheritance */

#include<iostream>
#include<stdlib.h>
using namespace std;
class A {
    protected:
        int n1;
};
class B:public A {
    protected:
        int n2;
};
class C:public A {
    protected:
        int n3;
};
class D:public A {
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
            cout<<"The entered numbers are:"<<endl;
            cout<<"n1="<<n1<<"\tn2="<<n2<<"\tn3="<<n3;
            cout<<"\tn4="<<n4<<"\tn5="<<n5<<endl<<"sum="<<sum;
        }
};
int main() {
    system("cls");
    E obj;
    obj.fun();
}
// Output: error