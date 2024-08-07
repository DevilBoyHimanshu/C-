/*
* WAP to demonstrate the nesting of member function 1's compliment */

#include<iostream>
#include<stdlib.h>
using namespace std;
class binary {
    string s;
    public:
    void read(void) {
        cout<<"Enter a binary number: ";
        cin>>s;
    }
    void chk_bin(void) {
        for(int i=0;i<s.length();i++) {
            if(s.at(i)!='0'&&s.at(i)!='1') {
                cout<<"Incorrect binary number format."<<endl<<"The program will quit.";
                exit(0);
            }
        }
    }
    void ones(void) {
        chk_bin(); //* calling member function
        for(int i=0;i<s.length();i++) {
            if(s.at(i)=='0')
                s.at(i)='1';
            else
                s.at(i)='0';
        }
    }
    void display_ones(void) {
        ones(); //* calling member function
        cout<<"The 1's compliment of the above binary number is: "<<s;
    }
};
int main() {
    system("cls");
    binary b;
    b.read();
    b.display_ones();
    return 0;
}
