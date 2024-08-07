/*
* WAP to illustrate the concept of Constructor Overloading */

#include<iostream>
#include<stdlib.h>
using namespace std;
class number {
    int n1, n2, n3;
    public:
    number() { //* default constructor
        cout<<"Enter the values for n1, n2 & n3: ";
        cin>>n1>>n2>>n3;
    }
    number(int x, int y, int z) { //* parameterized constructor
        n1=x, n2=y, n3=z;
    }
    void display() {
        cout<<"n1 = "<<n1<<endl<<"n2 = "<<n2<<endl<<"n3 = "<<n3<<endl;
    }
};
int main() {
    system("cls");
    number ob1; //* default constructor is called
    ob1.display();
    number ob2(2, 3, 4); //* parameterized constructor is called
    ob2.display();
}
