//Pointers in C++

#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 5

int main()
{
    cout<<"\n\nArray of Pointers in C++\n\n";
    cout<<"\n-\n--------1D array of Pointers-------------\n\n";
    int arr[5]={10,20,30,40,50};
    int *ptr_arr[MAX_SIZE];
    for(int i=0;i<MAX_SIZE;i++)
    {
        ptr_arr[i]=&arr[i];
        cout<<*ptr_arr[i]<<" ";
    }
    //2D pointers.
    cout<<"\n\n--------2D Array of Pointers in C++--------------\n\n";
    int **ptr_2d=new int*[MAX_SIZE];
    for(int i=0;i<MAX_SIZE;i++)
    {
        //now lets consider the 1D pointer's initialization.
        ptr_2d[i]=new int[MAX_SIZE];
        for(int j=0;j<MAX_SIZE;j++)
        {
            ptr_2d[i][j]=1+rand()%10;
        }
    }
    //display the elements.
    cout<<"\nThe Contents are as followed:\n";
    for(int i=0;i<MAX_SIZE;i++)
    {
        cout<<"\nElements in Array ["<<i<<"]"<<":"<<endl;
        for(int j=0;j<MAX_SIZE;j++)
        {
            cout<<ptr_2d[i][j]<<" ";
        }
    }
    return 0;
}