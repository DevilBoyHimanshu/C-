/*
* WAP to illustrate the use of parameterized constructor in inheritance */

#include<iostream>
#include<stdlib.h>
using namespace std;
class one {
    protected:
        int n1, n2;
    public:
        one (int x, int y) {
            n1=x;
            n2=y;
            cout<<"n1 = "<<n1<<"\t\tn2 = "<<n2;
        }
};
class two {
    protected:
        int n3, n4;
    public:
        two(int p, int q) {
            n3=p;
            n4=q;
            cout<<"\t\tn3 = "<<n3<<"\t\tn4 = "<<n4;
        }
};
class three:public one, public two {
    int n5, n6;
    public:
        three(int a, int b, int c, int d, int e, int f):one(c,d),two(e,f) {
            n5=a;
            n6=b;
            cout<<"\t\tn5 = "<<n5<<"\t\tn6 = "<<n6<<endl;
        }
        int sum() {
            int sum=0;
            sum=n1+n2+n3+n4+n5+n6;
            cout<<"Sum = "<<sum;
        }
};
int main() {
    system("cls");
    three obj(5,10,15,20,25,30);
    obj.sum();
}
