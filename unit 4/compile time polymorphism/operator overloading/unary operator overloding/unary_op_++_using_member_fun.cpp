/*
* WAP to overload unary operator ++ using member function */

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
    void operator++();
};
void num::show() {
    cout<<"n1 = "<<n1<<"\t\tn2 = "<<n2<<"\t\tn3 = "<<n3<<endl;
}
void num::operator++() {
    n1+=5, n2+=10, n3+=15;
}
int main() {
    system("cls");
    num obj(10, 20, 30);
    cout<<"The entered numbers are as below:"<<endl;
    obj.show();
    obj.operator++(); //* member function call
    cout<<"After execution of operator function:"<<endl;
    obj.show();
}
