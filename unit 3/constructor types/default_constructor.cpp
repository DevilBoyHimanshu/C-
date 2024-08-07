/*
* WAP to illustrate the concept of default constructor */

#include<iostream>
#include<stdlib.h>
using namespace std;
class number {
    int n1, n2, n3;
    public:
    number() { //* default argument
        n1=5, n2=10, n3=15;
    }
    void display() {
        cout<<"n1 = "<<n1<<endl;
        cout<<"n2 = "<<n2<<endl;
        cout<<"n3 = "<<n3<<endl;
    }
};
int main() {
    system("cls");
    number ob1; //* constructor is called 1st time
    ob1.display();
    number ob2; //* constructor  is called 2nd time
    ob2.display();
    number ob3; //* constructor  is called 3rd time
    ob3.display();
}
