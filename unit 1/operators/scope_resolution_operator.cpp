/* WAP to demonstrate the scope resolution operator */
#include<iostream>
#include<stdlib.h>
using namespace std;
int a=5;
int main() {
    system("cls");
    int a=7;
    cout<<"local a: "<<a<<" global a: "<<::a;
}
