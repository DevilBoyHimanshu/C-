/* Print Hello World 
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int a, b, c;
    cout<<"Hello World..."<<endl;
    cout<<"Enter 3 integers:";
    cin>>a>>b>>c;
    cout<<"The numbers are: ";
    cout<<"a="<<a<<"b="<<b<<"c="<<c<<endl;
}
*/



#include<iostream>
using namespace std;
int main() {
    int a=5, b=2;
    float d,e;
    d=a/b;
    e=(float)a/b; // explicit type casting
    cout<<"Division output: "<<d<<", "<<e;
}