//Pointers in C++

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int element=100;
    cout<<"\n-----------------POINTERS IN C++----------------------------\n";
    cout<<"The value of element is: "<<element<<endl;
    cout<<"The address of the element is: "<<&element<<endl;
    cout<<endl;
    //Pointers:are used to store the address of the respective element of same type.
    cout<<"\nNOTE:The address of the Pointer Variable and the Address stored in the Pointer Variable are different.\n";
    int *ptr=&element;
    cout<<endl;
    cout<<"The address of the Pointer Variable is: "<<&ptr<<endl;
    cout<<"The value of element is: "<<*ptr<<endl;
    return 0;
}