/*
* WAP to illustrate object slicing */

#include<iostream>
#include<stdlib.h>
using namespace std;
class A {
    public:
    int a;
    A() {
        a=10;
    }
};
class B:public A {
    public:
    int b;
    B() {
        a=40;
        b=50;
    }
};
int main() {
    system("cls");
    A x;
    B y;
    cout<<"a = "<<x.a<<endl;
    x=y; //* object slicing
    cout<<"again a = "<<x.a<<endl;
}
