/*
* WAP to perform swap operation using call by reference method */

#include<iostream>
#include<stdlib.h>
using namespace std;
void swap(int &, int &);
int main() {
    system("cls");
    int n1,n2;
    cout<<"Enter 2 number: ";
    cin>>n1>>n2;
    int &a=n1, &b=n2;
    cout<<"Before Swap:"<<endl<<"n1="<<a<<"\tn2="<<b<<endl;
    swap(n1,n2); //* referenced variable is passed
    cout<<"After Swap:"<<endl<<"n1="<<a<<"\tn2="<<b<<endl;
}
void swap(int &x, int &y) {
    int temp=0;
    temp=x, x=y, y=temp;
    cout<<"During Swap Function"<<endl<<"n1="<<x<<"\tn2="<<y<<endl;
}
