/* WAP to demonstrate the bitwise operator */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int a=10, b=12;
    cout<<"Bitwise AND: "<<(a&b)<<endl;
    cout<<"Bitwise OR: "<<(a|b)<<endl;
    cout<<"Bitwise XOR: "<<(a^b)<<endl;
    cout<<"Bitwise Left Shift: "<<(a<<2)<<endl;
    cout<<"Bitwise Right Shift: "<<(b>>2)<<endl;
    cout<<"Bitwise Compliment: "<<(~a);
}
