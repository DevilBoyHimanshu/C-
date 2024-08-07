/* WAP to swap 2 numbers without using 3rd variable */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int a, b;
    cout<<"Enter 2 number: ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping a: "<<a<<"\tb: "<<b;
}
