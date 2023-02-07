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
    
    cout<<"\n1D Pointers in C++ is as followed:\n";
    int *ptr_1d=&element;
    cout<<endl;
     cout<<"The address referred by 1D Pointer is: "<<ptr_1d<<endl;
    cout<<"The value dereferenced by 1D pointer is: "<<*ptr_1d<<endl;
    cout<<"The Actual address of 1D pointer is: "<<&ptr_1d<<endl;
   
   cout<<endl;
   cout<<endl;
   
   cout<<"\n2D Pointers in C++ is as followed:\n";

   int **ptr_2d=&ptr_1d;
   
    cout<<"The address referred by 2D Pointer is: "<<ptr_2d<<endl;
    cout<<"The value dereferenced by 2D pointer is: "<<*ptr_2d<<endl;
    cout<<"The Actual address of 2D pointer is: "<<&ptr_2d<<endl;
    return 0;
}