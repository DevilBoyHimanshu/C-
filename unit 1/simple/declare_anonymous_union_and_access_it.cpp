/*
* WAP in C++ to declare anonymous union & access it’s element */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    union {
        int k;
        float j;    
    };
    k=30;
    cout<<"k = "<<k;
    j=3.1;
    cout<<" j = "<<j;
    return 0;
}