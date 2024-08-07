/* 
* WAP to understand the use of continue statement */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int n;
    for(n=1;n<=5;n++) {
        if(n==3) {
            cout<<"I understand the use of continue statement."<<endl;
            continue;
        }
    cout<<"Number: "<<n<<endl;
    }
    cout<<"Out of loop";
}