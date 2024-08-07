/*
* WAP to demonstrate the concept of array of object */

#include<iostream>
#include<stdlib.h>
using namespace std;
class student {
    char name[20], dept[5];
    int roll, sem;
    float cgpa;
    public:
        void input();
        void display();
};
void student::input() {
    cout<<"Enter Student details: ";
    cin>>name>>dept>>roll>>sem>>cgpa;
}
void student::display() {
    cout<<"Student Details are below:"<<endl;
    cout<<"Name: "<<name<<endl<<"Dept: "<<dept<<endl;
    cout<<"Roll: "<<roll<<endl<<"Sem: "<<sem<<endl;
    cout<<"CGPA: "<<cgpa<<endl;
}
int main() {
    system("cls");
    student st[5]; //* array of object
    for(int i=0;i<5;i++)
        st[i].input();
    for(int i=0;i<5;i++)
        st[i].display();
}
