/*
* WAP to demonstrate the use of static data member */

#include<iostream>
#include<stdlib.h>
using namespace std;
class num {
	int n1;
	static int n2;
	public:
	void input(){
		cout<<"Enter the value for n1: ";
		cin>>n1;
	}
	void calculate() {
    	++n1;
    	++n2;
    	cout << "n1: " << n1 << endl << "n2: " << n2 << endl;
	}
};
int num :: n2 = 10;
int main() {
	system("cls");
	num obj1, obj2, obj3;
	obj1.input();
	obj1.calculate();
	obj2.input();
	obj2.calculate();
	obj3.input();
	obj3.calculate();
}
