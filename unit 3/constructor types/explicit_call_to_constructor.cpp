/*
* WAP in C++ to illustrate the concept of explicit call to a Constructor */

#include<iostream>
#include<stdlib.h>
using namespace std;
class sam {
    int n1;
    public:
    sam() {
        n1=5;
        cout<<"n1 = "<<n1<<endl;
    }
    sam(int x) {
        n1=x;
        cout<<"n1 = "<<n1<<endl;
    }
};
int main() {
    system("cls");
    sam(); //* explicit call (like a function) to default constructor
    sam(10); //* explicit call (like a function) to parameterized constructor
    sam s1; //* implicit call to default constructor 
    // sam s2; //* implicit call to default constructor or
    sam s2=sam(); //* explicit call to the constructor
    sam s3(20); //* implicit call to parameterized constructor
}
