/*
* WAP to add 2 integers using multilevel inheritance */

#include<iostream>
#include<stdlib.h>
using namespace std;
class rama {
    protected:
        int n1;
};
class hari:public rama {
    protected:
        int n2;
};
class dama:public hari {
    public:
        void input() {
            cout<<"Enter n1 & n2: ";
            cin>>n1>>n2;
        }
        void sum() {
            int sum=0;
            sum=n1+n2;
            cout<<"Sum = "<<sum;
        }
};
int main() {
    system("cls");
    dama ob;
    ob.input();
    ob.sum();
}
