/*
* WAP to illustrate method overriding */

#include<iostream>
#include<stdlib.h>
using namespace std;
class one {
    int n1;
    public:
    void fun() {
        n1=5;
        cout<<"n1 = "<<n1<<endl;
    }
};
class two:public one {
    int n2;
    public:
    void fun() {
        n2=10;
        cout<<"n2 = "<<n2<<endl;
    }
};
int main() {
    system("cls");
    two ob1;
    ob1.fun();
}
