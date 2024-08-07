/* 
* WAP to print whether a number is even or odd */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n%2==0) {
        goto even;
    } else {
        goto odd;
    }
    even:
    cout<<n<<" is even";
    goto end;
    odd:
    cout<<n<<" is odd";
    goto end;
    end:
    cout<<endl;
}