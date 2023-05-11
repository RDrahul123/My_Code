#include<iostream>
using namespace std;

int minimum(int arr[],  int x)
{
    int count=0;
    int d=0;
    int s=0;
    for(int i=0; i<x-1; i++)
    {
        if(arr[0]==0 && i==d)
            return -1; 
        
        d=max(d, arr[i]+i);
        if(s==i)
        {
            count++;
            s=d;
        }
    }
    return count;
}

int main()
{
    int arr[10]= {1, 2, 3, 2, 6, 2, 8, 1, 6, 9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int j= minimum(arr, n);

    cout<<"Minimum Jumps required are : "<<j<<endl;

}