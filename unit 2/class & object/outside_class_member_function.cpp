/*
* WAP to demonstrate the outside class member function */

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
    cout<<"Enter student details: ";
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
    student st;
    st.input();
    st.display();
}
