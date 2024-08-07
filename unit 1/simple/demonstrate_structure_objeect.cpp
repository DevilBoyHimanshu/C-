/*
* WAP in C++ to demonstrate structure object */

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main() {
    system("cls");
    struct student {
        int roll,classes;
        char name[20];
        float mark;
    } s;
    s.roll=10;
    strcpy(s.name,"rama");
    s.classes=2;
    s.mark=450.5;
    cout<<"Roll number: "<<s.roll<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Class: "<<s.classes<<endl<<"Mark: "<<s.mark;
}
