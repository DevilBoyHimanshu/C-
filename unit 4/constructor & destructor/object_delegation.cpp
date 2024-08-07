/*
* WAP to explain the concept of object delegation */

#include<iostream>
#include<stdlib.h>
using namespace std;
class one {
    public:
    int a;
    one() {
        a=10;
    }
};
class two {
    public:
    int k;
    one ob;
    two() {
        k=20;
    }
    void show() {
        cout<<"a = "<<ob.a<<"\tk = "<<k;
    }
};
int main() {
    system("cls");
    two t2;
    t2.show();
}
Output: a = 10  k = 20