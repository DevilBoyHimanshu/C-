/*
* WAP to illustrate the concept of copy constructor */

#include<iostream>
#include<stdlib.h>
using namespace std;
class num {
    int n1;
    public:
    num() { //* default arguments
        n1=0;
    }
    num(int k) { //* parameterized constructor
        n1=k;
    }
    num(num &j) { //* copy constructor
        n1=j.n1;
    }
    void display() {
        cout<<"n1 = "<<n1<<endl;
    }
};
int main() {
    system("cls");
    num ob1(50); //* parameterized constructor is called
    ob1.display();
    num ob2(ob1); //* implicit copy constructor is called
    ob2.display();
    num ob3(ob2); //* default constructor is called
    ob3.display();
    num ob4;
}
