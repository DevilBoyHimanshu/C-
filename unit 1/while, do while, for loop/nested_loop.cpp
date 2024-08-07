/* 
* WAP to find out multiplication table upto 10 nested for loop */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int i,j,mul;
    for(i=1;i<=10;i++) {
        for(j=1;j<=10;j++) {
            mul=i*j;
            cout<<mul<<"\t";
        }
        cout<<endl;
    }
}
