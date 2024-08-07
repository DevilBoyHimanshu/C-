/*
* WAP to illustrate the concept of hierarchical inheritance */

#include<iostream>
#include<stdlib.h>
using namespace std;
class a {
    public:
        a(){
            cout<<"Class A Constructor"<<endl;
        }
};
class b {
    public:
        b(){
            cout<<"Class B Constructor"<<endl;
        }
};
class c {
    public:
        c(){
            cout<<"Class C Constructor"<<endl;
        }
};
class d:public a, public b {
    public:
        d(){
            cout<<"Class D Constructor"<<endl;
        }
};
class e:public b, public c {
    public:
        e(){
            cout<<"Class E Constructor"<<endl;
        }
};
class f:public a, public c {
    public:
        f(){
            cout<<"Class F Constructor"<<endl;
        }
};
class g:public d, public f {
    public:
        g(){
            cout<<"Class G Constructor"<<endl;
        }
};
class h:public d, public e {
    public:
        h(){
            cout<<"Class H Constructor"<<endl;
        }
};
class i:public e, public f {
    public:
        i(){
            cout<<"Class I Constructor"<<endl;
        }
};
int main() {
    system("cls");
    g ob1;
    h ob2;
    i ob3;
}
