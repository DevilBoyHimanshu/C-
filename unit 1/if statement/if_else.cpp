/* WAP to print minimum number of denomination for an input amount */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int amt, x, n2000=0, n500=0, n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0, total=0;
    cout<<"Enter amount in rupees: ";
    cin>>amt;
    x=amt;
    if(amt>=2000) {
        n2000=amt/2000;
        amt%=2000;
    }
    if(amt>=500) {
        n500=amt/500;
        amt%=500;
    }
    if(amt>=100) {
        n100=amt/100;
        amt%=100;
    }
    if(amt>=50) {
        n50=amt/50;
        amt%=50;
    }
    if(amt>=20) {
        n20=amt/20;
        amt%=20;
    }
    if(amt>=10) {
        n10=amt/10;
        amt%=10;
    }
    if(amt>=5) {
        n5=amt/5;
        amt%=5;
    }
    if(amt>=2) {
        n2=amt/2;
        amt%=2;
    }
    else 
        n1=amt;
        total= n2000+n500+n100+n50+n20+n10+n5+n2+n1;
        cout<<"minimum number of denominations for amount "<<x<<" = "<<total;
}
