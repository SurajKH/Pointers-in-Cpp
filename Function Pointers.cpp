#include <iostream>
using namespace std;

//Function Pointers in C++

//function with 0 Parameters
int function()
{
    cout<<"\nfunction with 0 Parameters\n";
    return 0;
}

//function with 2 Parameters
int function(int a,int b)
{
    cout<<"\n function with 2 Parameters\n";
    cout<<"Paramters are: "<<a<<" "<<b<<endl;
    return a+b;
}
int main()
{
    cout<<"\n-----------------Function Pointers in C++-----------------------\n";
    cout<<"\nThe Result with respect to function pointers having 0 parameters are as followed:\n";
    int(*func_ptr)()=function;
    //function Pointers Prototype for 0 paramters:datatype(function_pointer_name)()
    func_ptr();
    int(*func_ptr_2)(int,int)=function;
    //function Pointers Prototype for 2 paramters:datatype(function_pointer_name)(datatype,datatype)
    cout<<"\nThe Result with respect to function pointers having 2 parameters are as followed:\n";
    cout<<func_ptr_2(10,23)<<endl;
    return 0;
}
