//Pointers in C++

#include<bits/stdc++.h>
using namespace std;

//implementation of void pointers.
void void_pointer(int *ptr)
{
    cout<<"The Address stored in the Pointer is: "<<ptr<<endl;
    cout<<"The value dereferenced by the Pointer is: "<<*ptr<<endl;
}

//overloading of void pointers.

void void_pointer(int *ptr1,int *ptr2)
{
    cout<<"\n\nOverloading of Void Pointers\n\n";
    cout<<"The Address stored in the Pointer is: "<<ptr1<<endl;
    cout<<"The value dereferenced by the Pointer is: "<<*ptr1<<endl;
    cout<<endl;
    cout<<"The Address stored in the Pointer is: "<<ptr2<<endl;
    cout<<"The value dereferenced by the Pointer is: "<<*ptr2<<endl;
}

int main()
{
    int element1=100,element2=200;
    cout<<"\n-----------------POINTERS IN C++----------------------------\n";
    cout<<"\n\nVoid Pointers along with overloading Concepts\n\n";
    void_pointer(&element1);
    void_pointer(&element1,&element2);
    return 0;
}