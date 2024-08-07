/*
* WAP to illustrate the concept of parameterized constructor */

#include<iostream>
#include<stdlib.h>
using namespace std;
class number {
    int n1, n2, n3;
    public:
    number(int x, int y, int z) { //* parameterized constructor
        n1=x, n2=y, n3=z;
    }
    void display() {
        cout<<"n1 = "<<n1<<endl;
        cout<<"n2 = "<<n2<<endl;
        cout<<"n3 = "<<n3<<endl;
    }
};

int main() {
    system("cls");
    number ob1(5, 10, 15);
    ob1.display();
    number ob2(2, 3, 4);
    ob2.display();
}
/*
int main() {
    system("cls");
    int a, b, c;
    cout<<"Enter a, b & c: ";
    cin>>a>>b>>c;
    number ob1(a, b, c);
    ob1.display();
} */
