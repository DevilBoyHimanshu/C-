/* WAP to illustrate the use of switch case statement */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int i;
    cout<<"Enter the number: ";
    cin>>i;
    switch(i) {
        case 1:
        cout<<"1st"<<endl;
        case 2:
        cout<<"2nd"<<endl;
        case 3:
        cout<<"3rd"<<endl;
        default:
        cout<<"wrong number";
    }
}
