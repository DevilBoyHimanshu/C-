/*
* WAP to demonstrate the use of static member function */

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
    static void show() {
        cout << "n2: " <<n2<< endl;
    }
    void display() {
        cout << "n1: " <<n1<< endl;
    }
};
int num::n2=10;
int main() {
	system("cls");
	num obj1;
	obj1.input();
	obj1.display();
    num::show();
}
