#include<iostream>
using namespace std;

int floor(int arr[], int n, int a)
{
    int mid;
    int low=0;
    int high= n;
    int s;
    while (low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==a)
            return arr[mid];
        else
        if(arr[mid]<a)
        {
            s=arr[mid];
            low=mid+1;
        }
        else
        if(arr[mid]>a)
            high=mid-1;
    }
    return s;
}

int ceil(int arr[], int n, int a)
{
    int mid;
    int low=0;
    int high= n;
    int s;
    while (low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==a)
        return arr[mid];
        else
        if(arr[mid]<a)
        low=mid+1;
        else
        if(arr[mid]>a)
        {
            s=arr[mid];
            high=mid-1;
        }
    }
        return s;
}

int minimum_difference(int a, int b, int c)
{
    if(a-b<c-a)
    return b;
    else
    return c;
}

int main()
{
    int arr[5]= {2, 5, 6, 9, 10};
    int n= sizeof(arr)/sizeof(arr[0]);
    int a;
    cout<<"Enter the Element: ";
    cin>>a;
    int r1= floor(arr, n, a);
    int r2= ceil(arr, n, a);
    int x= minimum_difference(a, r1, r2);
    cout<<"Minimum Difference Element is : "<<x;
}