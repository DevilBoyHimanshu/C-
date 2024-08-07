/* WAP to demonstrate the bit field operator */
#include<iostream>
#include<stdlib.h>
using namespace std;
struct A {
    int p:2;
    int q:5;
};
int main() {
    system("cls");
    A a;
    cout<<"size of structure: "<<sizeof(a);
}
