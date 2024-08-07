/*
* WAP to overload unary operator ++ using friend function method & operator function must return */

#include<iostream>
#include<stdlib.h>
using namespace std;
class num {
    int n1, n2, n3;
    public:
    num():n1(0), n2(0), n3(0) {} //* default constructor
    //* parameterized constructor
    /*num(int x, int y, int z) { 
        n1=x, n2=y, n3=z;
    }    Or   */

    num(int x, int y, int z):n1(x), n2(y), n3(z){}
    
    void show();
    friend num operator++(num);
};
void num::show() {
    cout<<"n1 = "<<n1<<"\t\tn2 = "<<n2<<"\t\tn3 = "<<n3<<endl;
}
num operator++(num o1) {
    o1.n1+=5, o1.n2+=10, o1.n3+=15;
    return (o1);
}
int main() {
    system("cls");
    num obj(10, 20, 30);
    cout<<"The entered numbers are as below:"<<endl;
    obj.show();
    cout<<"After execution of operator function:"<<endl;
    num o2;
    o2=operator++(obj); //* friend function call
    o2.show();
    return 0;
}
