/* WAP to demonstrate the logical operator */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int i = 10, j = 20, k = 15;
    cout<<((i<j) && (j>k))<<((i<j) && (j<k))<<((i<j) || (j<k))<<((i>j) ||(j))<<(!(i>j) || (j<k))<<(!j);
}
