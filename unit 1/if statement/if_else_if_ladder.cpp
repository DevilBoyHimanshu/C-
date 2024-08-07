/* WAP to generate following grade when mark is given consider the situation of grade according to the mark secured */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    system("cls");
    int m;
    cout<<"Enter the mark: ";
    cin>>m;
    if(m>=90)
        cout<<"Grade O";
    else if(m>=80)
        cout<<"Grade E";
    else if(m>=60)
        cout<<"Grade A";
    else if(m>=50)
        cout<<"Grade B";
    else if(m>=80)
        cout<<"Grade C";
    else
        cout<<"Grade F";
}
