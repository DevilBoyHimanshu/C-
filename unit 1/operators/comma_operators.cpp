/* WAP to swapping of 2 numbers using 3rd variable using comma operator */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int a=4, b=5, temp; //multiple variable
    cout<<"Before swapping a: "<<a<<" b: "<<b<<endl;
    temp=a, a=b, b=temp; //multiple expression
    cout<<"After swapping a: "<<a<<" b: "<<b;
}
