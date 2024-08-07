/* WAP to create an array using New & Delete Operation */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int *p = new int[5], i;
    cout<<"Enter 5 element: ";
    for(i=0;i<5;i++) {
        cin>>*(p+i);
    }
    cout<<"The entered elements are: ";
    for(i=0;i<5;i++) {
        cout<<*(p+i)<<"\t";
    }
    delete p;
}