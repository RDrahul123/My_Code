#include<iostream>
using namespace std;

int rotate(int arr[], int n)
{
    int mid;
    int low= 0;
    int high= n;

    while (low<=high)
    {
        mid= (low+high)/2;
        int prev = (mid - 1 + n) % n;
        int next = (mid + 1) % n;
        if(arr[mid]<arr[prev] && arr[mid]<arr[next])
               return mid;
        else
        if(arr[mid]>=arr[low])
            low=mid+1;
        else
        if(arr[mid]<=arr[high])
            high=mid-1;
    }
    return 0;
}

int main()
{
    int arr[10]= {10, 11, 12, 15, 17, 2, 4, 6, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans= rotate(arr, n);
    cout<<"Number of Rotates : "<<ans<<endl;
    return 0;
}
