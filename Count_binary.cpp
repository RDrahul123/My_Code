#include<iostream>
using namespace std;

int first(int arr[], int n, int a)
{
    int c= 0;
    int mid;
    int low=0;
    int high=n;

    for(int i=0; i<=n; i++)
    {
        mid= (low+high)/2;
        if(arr[mid]==a)
        {
            c=mid;
            high=mid-1;
        }
        else
        if(arr[mid]>a)
            high=mid-1;
        else
        if(arr[mid]<a)
            low=mid+1;
    }
    return c;
}

int last(int arr[], int n, int a)
{ 
    int c1;
    int mid;
    int low=0;
    int high=n;
    for(int i=0; i<n; i++)
    {
        mid= (low+high)/2;
        if(arr[mid]==a)
        {
            c1=mid;
            low= mid+1;
        }
        else
        if(arr[mid]<a)
            low= mid+1;
        else
            high=mid-1;
    }
    return c1;
}

int count(int x, int y)
{
    int a;
    if(x==0 && y==0)
        return -1;
    else
        a= y-x+1;
    return a;
}

int main()
{
    int arr[10]= {1, 3, 4, 6, 9, 9, 9, 13, 15, 18};
    int n = sizeof(arr)/sizeof(arr[0]); 
    int a;
    cout << "Enter the value to be searched : ";
    cin >> a;
    int c = first(arr, n, a);
    int c1 = last(arr, n, a);
    int ans = count(c, c1);
    if (ans == -1)
        cout << "Element is not present in the array";
    else
        cout << "Count of ELement "<<a<<" :" <<ans<<" ";
    return 0;
}