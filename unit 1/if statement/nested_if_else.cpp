/* WAP to find the greatest among 3 numbers using nested if else */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    if(a>b) {
        if(a>c)
            cout<<"Greatest number is: "<<a;
        else
            cout<<"Greatest number is: "<<c;
    }
    else if (b>c) {
        cout<<"Greatest number is: "<<b;
    }
    else
        cout<<"Greatest number is: "<<c;

}
