/*
* WAP to illustrate the execution of constructor & destructor in case of virtual base class */

#include<iostream>
#include<stdlib.h>
using namespace std;
class one {
    public:
        one(){
            cout<<"Class One Constructor"<<endl;
        }
};
class two {
    public:
        two() {
            cout<<"Class Two Constructor"<<endl;
        }
};
class three:public one, virtual public two {
    public:
        three(){
            cout<<"Class Three Constructor"<<endl;
        }
};
int main() {
    system("cls");
    three obj;
    // obj.one();
    // obj.two();
}
Output: Class Two Constructor
Class One Constructor
Class Three Constructor