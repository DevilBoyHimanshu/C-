/* WAP to understand the switch case with break statement */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int i;
    cout<<"Enter your choice: ";
    cin>>i;
    switch(i) {
        case 1:
        cout<<"1st"<<endl;
        break;
        case 2:
        cout<<"2nd"<<endl;
        break;
        case 3:
        cout<<"3rd"<<endl;
        break;
        default:
        cout<<"wrong number";
    }
}