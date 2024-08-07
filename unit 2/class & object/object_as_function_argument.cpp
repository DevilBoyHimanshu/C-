/*
* WAP to demonstrate the concept of object as function argument */

#include<iostream>
#include<stdlib.h>
using namespace std;
class product {
	int mfg_yr, exp_yr;
	 public:
        void input();
        void lifetime(product &p1);
};
void product::input() {
    cout<<"Enter the year manufacturing & expiry: ";
    cin>>mfg_yr>>exp_yr;
}
void product::lifetime(product &p1) {
    int lop=0;
    lop = p1.exp_yr - p1.mfg_yr;
    cout<<"Useful life of product: "<<lop<<" years";
}
int main() {
    system("cls");
    product p2;
    p2.input();
    p2.lifetime(p2); //* object p2 is passed an argument
}
