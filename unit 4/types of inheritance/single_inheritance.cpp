/*
* WAP to add 2 integer using single inheritance */

#include<iostream>
#include<stdlib.h>
using namespace std;
class rama {
    protected:
        int n1;
};
class hari:public rama { //* single inheritance
    int n2;
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
    hari ob;
    ob.input();
    ob.sum();
}
