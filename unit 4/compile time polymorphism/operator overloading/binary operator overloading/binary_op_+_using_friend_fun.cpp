/*
* WAP in C++ to overload binary operator ‘+’ using friend function method */

#include<iostream>
#include<stdlib.h>
using namespace std;
class sample {
    int n1, n2;
    public:
    sample(){}  
    sample(int x, int y) {
        n1=x, n2=y;
    }
    void show();
    friend sample operator+(sample, sample);
    friend sample operator+(sample, int);
    friend sample operator+(int, sample);
};
void sample::show() {
    cout<<"n1 = "<<n1<<"\t\tn2 = "<<n2<<endl;
}
sample operator+(sample s1, sample s2) {
    sample s3;
    s3.n1=s1.n1+s2.n1, s3.n2=s1.n2+s2.n2;
    return (s3);
}
sample operator+(sample s4, int x) {
    sample s5;
    s5.n1=s4.n1+x, s5.n2=s4.n2+x;
    return (s5);
}
sample operator+(int y, sample s6) {
    sample s7;
    s7.n1=y+s6.n1, s7.n2=y+s6.n2;
    return (s7);
}
int main() {
    system("cls");
    sample s8(2, 4), s9(3, 6);
    cout<<"For object s8:"<<endl;
    s8.show();
    cout<<"For object s9:"<<endl;
    s9.show();
    sample s10;
    s10=operator+(s8, s9); //* call to 1st operator function
    cout<<"For object s10:"<<endl;
    s10.show();
    sample s11;
    s11=operator+(s8, 10); //* call to 2nd operator function
    cout<<"For object s11:"<<endl;
    s11.show();
    sample s12;
    s12=operator+(15, s11); //* call to 3rd operator function
    cout<<"For object s12:"<<endl;
    s12.show();
    sample s13;
    s13=operator+(s8, s12); //* call to 4th operator function
    cout<<"For object s13:"<<endl;
    s13.show();
}
