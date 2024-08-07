/*
* WAP to illustrate the concept of destructor */

#include<iostream>
#include<stdlib.h>
using namespace std;
class rama {
    int a;
    public:
    rama() {
        cout<<"Enter a: ";
        cin>>a;
        cout<<"a = "<<a<<endl;
    }
    ~ rama() {
        cout<<"Destructor activates"<<endl;
    }
};
int main() {
    system("cls");
    rama s1;
    rama s2;
}
