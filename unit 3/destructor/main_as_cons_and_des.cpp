/*
* Example of main as constructor & destructor */

#include<iostream>
#include<stdlib.h>
using namespace std;
class main {
    public:
    main() {
        cout<<"Main as a constructor"<<endl;
    }
    ~main() {
        cout<<"Main as a destructor"<<endl;
    }
};
int main() {
    system("cls");
    class main ob1;
}
