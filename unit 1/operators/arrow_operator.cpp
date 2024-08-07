/* WAP demonstrates the arrow operator */
#include<iostream>
#include<stdlib.h>
using namespace std;
struct a {
    int x;
    float y;
} *p;
int main() {
    system("cls");
    p=new a; // allocate memory for p
    cout<<"Enter the value of x & y: ";
    cin>>p->x>>p->y;
    cout<<"x: "<<p->x<<" y: "<<p->y;
    delete p; // deallocate memory to prevent memory leaks
}
