#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int x)
{
    int mid;
    int low= 0;
    int high= n;

    for(int i=0; i<n; i++)
    {
        mid= (low+high)/2;
        if(arr[mid]==x)
            return mid;
        else
        if(arr[mid]<x)
            low=mid+1;
        else
        if(arr[mid]>x)
            high=mid-1;
    }
    return -1;
}

int main()
{
    int arr[10]= {1, 3, 5, 6, 8, 9, 10, 13, 15, 19};
    int n = sizeof(arr)/sizeof(arr[0]);  
    cout << "Enter the number to be searched: ";
    int x;
    cin >> x;
    int ans = binarysearch(arr, n, x);
    if (ans == -1)
        cout << "Element is not present in array";
    else
        cout<<"Element found at : "<<ans<<endl;
    
    return 0;
}