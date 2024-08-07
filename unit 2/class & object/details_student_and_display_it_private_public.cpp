/* 
* WAP to enter the details of a student & display them using class & object.
*  The details should be private in nature & use public member function to access the private member. */

#include<iostream>
#include<stdlib.h>
using namespace std;
class stud {
    private:
        char name[20];
        char dept[5];
        int roll, sem;
        float cgpa;
    public:
        void input() {
            cout<<"Enter the student details: ";
            cin>>name>>dept>>roll>>sem>>cgpa;
        }
        void display() {
            cout<<"Student Details are below:"<<endl;
            cout<<"Name: "<<name<<endl<<"Dept: "<<dept<<endl;
            cout<<"Roll: "<<roll<<endl<<"Sem: "<<sem<<endl;
            cout<<"CGPA: "<<cgpa<<endl;
        }
};
int main () {
    system("cls");
    stud st;
    st.input(); //* object access the public function
    st.display();
}
