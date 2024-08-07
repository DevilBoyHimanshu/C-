/* WAP to check whether a year is leap or not */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int y;
    cout<<"Enter the year: ";
    cin>>y;
    if(y%100==0) {
        if(y%400==0)
            cout<<y<<" is leap year";
        else
            cout<<y<<" is not leap year";
    }
    else if(y%4==0) 
        cout<<y<<" is leap year";
    else
        cout<<y<<" is not leap year";
}
