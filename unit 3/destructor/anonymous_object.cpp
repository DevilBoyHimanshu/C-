/*
* WAP to illustrate the concept of anonymous object */

#include<iostream>
#include<stdlib.h>
using namespace std;
class rama {
    int n1;
    public:
    rama() {
        n1=5;
        cout<<"n1 = "<<n1<<endl;
    }
    rama(int x) {
        n1=x;
        cout<<"n1 = "<<n1<<endl;
    }
};
int main() {
    system("cls");
    rama();
    rama(10);
}
