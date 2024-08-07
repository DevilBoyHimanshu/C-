/* WAP to convert Celsius to Fahrenheit f=(c*9/5)+32 */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    float c, f;
    cout<<"Enter temperature in Celsius: "
    cin>>c;
    cout<<"The temperature in Fahrenheit is: "<<((c*9/5)+32)<<"f"; //c=(f-32)*5/9
}
