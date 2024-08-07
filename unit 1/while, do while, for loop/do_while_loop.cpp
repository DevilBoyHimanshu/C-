/*
* WAP to demonstrate do ...while loop */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int c=1;
    do {
        cout<<c<<"\t";
        c++;
    } while(c<=5);
}