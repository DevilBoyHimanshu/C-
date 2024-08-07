/*
* WAP to overload - operator */

#include<iostream>
#include<stdlib.h>
using namespace std;
class num {
    private:
    int a,b,c,d;
    public:
    num(int x, int y, int z, int w) {
        a=x, b=y, c=z, d=w;
    }
    void show(void);
    void operator-();
};
void num::show() {
    cout<<"A = "<<a<<"\tB = "<<b<<"\tC = "<<c<<"\tD = "<<d;
}
void num::operator-() {
    a=-a, b=-b, c=-c, d=-d;
}
int main() {
    system("cls");
    num x(2,2,8,4);
    cout<<"\nBefore Negation of x: ";
    x.show();
    -x;
    cout<<"\nAfter Negation of x: ";
    x.show();
}
