#include<iostream>
using namespace std;

void first(int arr[], int n, int a)
{
    int mid;
    int low=0;
    int high=n;
    int r;

    for(int i=0; i<n; i++)
    {
        mid= (low+high)/2;
        if(arr[mid]==a)
        {
            r=mid;
            high= mid-1;
        }
        else
        if(arr[mid]>a)
            high=mid-1;
        else
            low=mid+1;
    }
    cout<<"First occurance of number : "<<r<<endl;
}

void last(int arr[], int n, int a)
{
    int mid;
    int low=0;
    int high=n;
    int r;
    for(int i=0; i<n; i++)
    {
        mid= (low+high)/2;
        if(arr[mid]==a)
        {
            r=mid;
            low= mid+1;
        }
        else
        if(arr[mid]<a)
            low= mid+1;
        else
            high=mid-1;
    }
    cout<<"Last occurance of number : "<<r<<endl;
}

int main()
{
    int arr[10]= {1, 3, 4, 5, 5, 5, 6, 8, 9, 11};
    int n= sizeof(arr)/sizeof(arr[0]);
    int a;
    cout<<"Enter the number to be searched : ";
    cin>>a;
    first(arr, n, a);
    last(arr, n, a);
    
}