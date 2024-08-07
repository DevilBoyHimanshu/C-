/*
* WAP to overload unary operator ++ using friend function */

#include<iostream>
#include<stdlib.h>
using namespace std;
class num {
    int n1, n2, n3;
    public:
    num(int x, int y, int z) {
        n1=x, n2=y, n3=z;
    }
    void show();
    friend void operator++(num);
};
void num::show() {
    cout<<"n1 = "<<n1<<"\t\tn2 = "<<n2<<"\t\tn3 = "<<n3<<endl;
}
void operator++(num o1) {
    o1.n1+=5, o1.n2+=10, o1.n3+=15;
    cout<<"n1 = "<<o1.n1<<"\t\tn2 = "<<o1.n2<<"\t\tn3 = "<<o1.n3<<endl;
}
int main() {
    system("cls");
    num obj(10, 20, 30);
    cout<<"The entered numbers are as below:"<<endl;
    obj.show();
    cout<<"After execution of operator function:"<<endl;
    operator++(obj); //* friend function call
}
