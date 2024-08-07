/*
* WAP to illustrate the concept of dynamic constructor */

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class MyString {
    char *name;
    int length;
    public:
    MyString() { //* constructor 1
        length = 0;
        name = new char[length+1];
        name[0]='\0';
    }
    MyString(char *s) { //* constructor 2
        length = strlen(s);
        name = new char[length+1]; //* one additional character for \o
        strcpy(name, s);
    }
    void display () {
        cout<<name<<" \n";
    }
    void join(MyString &a, MyString &b);
};
void MyString::join(MyString &a, MyString &b) {
    length = a.length + b.length;
    // if(name != NULL){
    delete name;
    // }
    name = new char[length+1]; //* dynamic allocation
    strcpy(name, a.name);
    strcat(name, b.name);
}
int main () {
    system("cls");
    char *first = "Joseph";
    MyString name1(first), name2("Louis"), name3("Lagrange"), s1, s2;
    s1.join(name1, name2);
    s2.join(s1, name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();
    return 0;
}
