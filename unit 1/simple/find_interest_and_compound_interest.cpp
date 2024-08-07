/* WAP to find out simple interest & compound interest */

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main() {
    system("cls");
    double p, r, si, ci;
    int t;
    cout<<"Enter p, r & t: ";
    cin>>p>>r>>t;
    si=(p*r*t)/100;
    cout<<"Simple Interest: "<<si<<endl;
    ci=p*pow((1+r/100), t)-p;
    cout<<"Compound Interest: "<<ci;
}
