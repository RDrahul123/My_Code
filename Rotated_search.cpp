#include<iostream>
using namespace std;

int rotated_binary(int arr[], int n, int a)
{
    int mid;
    int low=0;
    int high=n-1;

    while(low<=high)    
    {
        mid= (low+high)/2;
        if(arr[mid]==a)
            return mid;
        else
        if(arr[mid]>=arr[low])
        {
            if(a>=arr[low] && a<=arr[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        else
        if(arr[mid]<=arr[low])
        {
            if(a>=arr[mid] && a<=arr[high])
                low= mid+1;
            else
                high= mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[10]= {10, 11, 12, 15, 17, 2, 4, 6, 8, 9};
    int n= sizeof(arr)/ sizeof(arr[0]);
    
    int a;
    cout<<"Enter the number to be searched: ";
    cin>>a;
    
    int ans= rotated_binary(arr, n, a);
    cout<<ans;
    
    
    return 0;
}