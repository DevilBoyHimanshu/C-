/*
* WAP to illustrate the use of friend function */

#include<iostream>
#include<stdlib.h>
using namespace std;
class product {
    int mfg_yr, exp_yr;
    public:
    void input();
    friend void lifetime(product);
};
void product::input() {
    cout<<"Enter the year of manufacturing & expiry: ";
    cin>>mfg_yr>>exp_yr;
}
void lifetime(product p1) {
    int lop=0;
    lop=p1.exp_yr - p1.mfg_yr;
    cout<<"Useful life of product: "<<lop<<" years";
}
int main () {
    system("cls");
    product p2;
    p2.input();
    lifetime(p2); //* friend function is called
}
