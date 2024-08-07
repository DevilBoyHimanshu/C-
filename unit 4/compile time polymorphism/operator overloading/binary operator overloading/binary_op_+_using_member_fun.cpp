/*
* WAP in C++ to overload binary operator ‘+’ using member function method */

#include<iostream>
#include<stdlib.h>
using namespace std;
class sample {
    int n1, n2;
    public:
    sample(){}  //* zero argument or default constructor
    sample(int x, int y) {
        n1=x, n2=y;
    }
    void show();
    sample operator+(int);
    sample operator+(sample);
};
void sample::show() {
    cout<<"n1 = "<<n1<<"\t\tn2 = "<<n2<<endl;
}
sample sample::operator+(int x) {
    sample s1;
    s1.n1=n1+x, s1.n2=n2+x;
    return (s1);
}
sample sample::operator+(sample s3) {
    sample s4;
    s4.n1=n1+s3.n1, s4.n2=n2+s3.n2;
    return (s4);
}
int main() {
    system("cls");
    sample s5(10, 20);
    cout<<"For object s5:"<<endl;
    s5.show();
    sample s6;
    s6=s5.operator+(5); //* explicit call to 1st operator function
    cout<<"For object s6:"<<endl;
    s6.show();
    sample s7;
    s7=s6.operator+(s5); //* explicit call to 2nd operator function
    cout<<"For object s7:"<<endl;
    s7.show();
    // return 0;
}
