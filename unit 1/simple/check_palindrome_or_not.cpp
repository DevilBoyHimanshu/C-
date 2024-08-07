/* 
* WAP to check whether a number is palindrome or not */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int n, rev=0, rem, x;
    cout<<"Enter a number: ";
    cin>>n;
    x=n;
    while(n>0) //(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    } 
    cout<<"Reverse of "<<x<<" is: "<<rev;
    if(x==rev) {
        cout<<endl<<x<<" is palindrome";
    } else {
        cout<<endl<<x<<" is not palindrome";
    }
}