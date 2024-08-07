/*
* WAP to illustrate the concept of friend class */

#include<iostream>
#include<stdlib.h>
using namespace std;
class B; //* forward declaration of a class
class A {
    int a;
    public:
    void input() {
        a = 5;
    }
    void show(B);
};
class B {
    int b;
    public:
    void input() {
        b = 10;
    }
    friend void A::show(B); //* A becomes friend of B using show
};
void A::show(B obj) {
    cout<<"a = "<<a<<"\tb = "<<obj.b;
}
int main() {
    system("cls");
    A obj1;
    obj1.input();
    B obj2;
    obj2.input();
    obj1.show(obj2);
}
Output: a = 5   b = 10