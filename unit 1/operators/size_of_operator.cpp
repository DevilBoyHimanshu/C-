/* WAP to demonstrate size of operator */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int a=5;
    float b=25;
    cout<<"size of (a): "<<sizeof(a)<<"\tsize of (b): "<<sizeof(b)<<endl;
    cout<<"size of (int): "<<sizeof(int)<<"\tsize of (float): "<<sizeof(float)<<endl;
    cout<<"size of ('a'): "<<sizeof('a')<<"\tsize of ('a'+10): "<<sizeof('a'+10)<<endl;
    cout<<"size of (2.5): "<<sizeof(2.5)<<"\tsize of ('a'+2.5): "<<sizeof('a'+2.5);
}
