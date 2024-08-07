/* WAP that prompts the user to input the masses of the bodies & the distance between the bodies.
    The program then output the force between the bodies */

#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    float m1, m2, dist;
    cout<<"Enter mass of 2 bodies: ";
    cin>>m1>>m2;
    cout<<"Enter distance between bodies: ";
    cin>>dist;
    cout<<"Force: "<<6.67*pow(10, -8) * (m1*m2)/dist*dist;
}
