/*
* WAP to demonstrate the concept private member function */

#include<iostream>
#include<stdlib.h>
using namespace std;
class student {
    char name[20], dept[5];
    int roll, sem;
    float cgpa;
    void input(); //* private member function 
    public:
        void display(); //* public member function
};
void student::input() {
    cout<<"Enter student details: ";
    cin>>name>>dept>>roll>>sem>>cgpa;
}
void student::display() {
    input(); //* call to private member function
    cout<<"Student Details are below:"<<endl;
    cout<<"Name: "<<name<<endl<<"Dept: "<<dept<<endl;
    cout<<"Roll: "<<roll<<endl<<"Sem: "<<sem<<endl;
    cout<<"CGPA: "<<cgpa<<endl;
}
int main() {
    system("cls");
    student st;
    st.display(); //* object access public function
}
