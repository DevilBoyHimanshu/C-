/* WAP to demonstrate the relational operator */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int i = 5, j = 8, k = 7;
    cout<<(i<1)<<((i+j)>=k)<<((j+k)>(i+5))<<(k!=7)<<(j==7);
}
