/* WAP understand enum */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    // enum x{a,b,c,d,e}; //ex: 1
    enum x{a,b,c=65,d,e}; // ex: 2
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<" e="<<e;
}
