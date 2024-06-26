#include<iostream>
using namespace std;

int floor(int arr[], int n, int a)
{
    int mid;
    int low=0;
    int high=n;
    int res;

    while(low<=high)
    {
        mid= (low+high)/2;
        if(arr[mid]==a)
            return mid-1;
        else
        if(arr[mid]<a)
        {
            res=arr[mid];
            low=mid+1;
        }
        else
        if(arr[mid]>a)
            high=mid-1;
    }
    return res;
}

int main()
{
    int arr[10]= {1, 4, 5, 6, 8, 9, 11, 14, 17, 19};
    int n= sizeof(arr)/sizeof(arr[0]);
    int a;
    cout<<"Enter the element : ";
    cin>>a;

    int ans= floor(arr, n, a);
    cout<<"Floor of "<<a<<" is : "<<arr[ans]<<endl;
    return 0;
}