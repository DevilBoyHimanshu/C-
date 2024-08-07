/*
* WAP to find greater between 2 number using conditional operator */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int a,b;
    cout<<"Enter 2 number: ";
    cin>>a>>b;
    a>b?(cout<<a<<" is greater"):(cout<<b<<" is greater");
}

/* 
* WAP to find greatest between 3 number using conditional operator */
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int a,b,c,max;
    cout<<"Enter 3 number: ";
    cin>>a>>b>>c;
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    cout<<"Largest number is: "<<max;
} */