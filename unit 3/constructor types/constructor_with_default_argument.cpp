/*
* WAP to illustrate the concept of constructor with default argument */

#include<iostream>
#include<stdlib.h>
using namespace std;
class number {
    int n1, n2, n3;
    public:
    number(int x=2, int y=4, int z=6) {
        n1=x, n2=y, n3=z;
    }
    void display() {
        cout<<"n1 = "<<n1<<endl<<"n2 = "<<n2<<endl<<"n3 = "<<n3<<endl;
    }
};
int main() {
    system("cls");
    number ob1(5, 10, 15);
    ob1.display();
    number ob2(11, 12);
    ob2.display();
    number ob3(20);
    ob3.display();
    number ob4;
    ob4.display();
}
