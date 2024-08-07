/* 
* WAP to enter the details of a student & display them using class & object */

#include<iostream>
#include<stdlib.h>
using namespace std;
class stud {
    public:
    char name[20];
    char dept[5];
    int roll, sem;
    float cgpa;
};
int main () {
    system("cls");
    stud st;
    cout<<"Enter the student details: ";
    cin>>st.name>>st.dept>>st.roll>>st.sem>>st.cgpa;
    cout<<"Student Details are below:"<<endl;
    cout<<"Name: "<<st.name<<endl<<"Dept: "<<st.dept<<endl;
    cout<<"Roll: "<<st.roll<<endl<<"Sem: "<<st.sem<<endl;
    cout<<"CGPA: "<<st.cgpa<<endl;
}
