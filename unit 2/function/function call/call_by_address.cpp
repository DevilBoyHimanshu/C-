/*
* WAP to perform swap operation using call by address method */

#include<iostream>
#include<stdlib.h>
using namespace std;
void swap(int *, int *); // * function declaration
int main() {
    system("cls");
    int n1,n2;
    cout<<"Enter 2 number: ";
    cin>>n1>>n2;
    cout<<"Before Swap:"<<endl<<"n1="<<n1<<"\tn2="<<n2<<endl;
    swap(&n1, &n2); //* Address is passed as argument
    cout<<"After Swap:"<<endl<<"n1="<<n1<<"\tn2="<<n2<<endl;
}
void swap(int *x, int *y) {
    int temp=0;
    temp=*x, *x=*y, *y=temp;
    cout<<"During Swap Function"<<endl<<"n1="<<*x<<"\tn2="<<*y<<endl;
}
