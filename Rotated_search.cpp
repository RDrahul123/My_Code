#include<iostream>
using namespace std;

int binary(int arr[], int s, int e, int a)
{
    int mid;
    int low=s;
    int high=e;

    for(int i=0; i<high; i++)
    {
        mid= (low+high)/2;
        if(arr[i]==a)
            return mid-1;
        else
        if(arr[i]<a)
            low=mid+1;
        else
        if(arr[i]>a)
            high=mid-1;
    }
    return 0;
}

int main()
{
    int arr[10]= {10, 11, 12, 15, 17, 2, 4, 6, 8, 9};
    int n= sizeof(arr)/ sizeof(arr[0]);
    
    int a;
    cout<<"Enter the number to be searched: ";
    cin>>a;
    
    int mid;
    int low=0;
    int high= n;
    int ans;

    mid= (low+high)/2;
    if(arr[mid]<arr[low])
    {    
        ans= binary(arr, mid, high, a);
        cout<<n-ans;
    }
    else
    if(arr[mid]>arr[low])
    {
        ans= binary(arr, low, mid, a);
        cout<<n-ans;
    }
    
    return 0;
}