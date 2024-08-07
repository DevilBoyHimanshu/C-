/*
* WAP to demonstrate the use of static member function */

#include<iostream>
#include<stdlib.h>
using namespace std;
class num {
	int n1, n2, n3;
    public:
	void fun() {
        n1=n1+5;
        n2=n2+10;
		cout<<"n1: "<<n1<<"\tn2: "<<n2;
	}
};
int main() {
	system("cls");
	static num obj1;
	obj1.fun(); //* static object
}
