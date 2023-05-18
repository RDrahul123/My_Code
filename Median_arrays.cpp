#include<iostream>
using namespace std;

void median(int arr1[], int arr2[], int n, int m)
{
    int r= m+n;
    int arr[r];   
    int i=0, j=0, s=0;
    int mid;
    int low= 0;
    int high= r;
    int a, b;
    while (i<n)
    {
        arr[s++] = arr1[i++];
    }

    while (j<m)
    {
        arr[s++] = arr2[j++];
    }
    
    mid= (low+high)/2;
    if(r%2==0)
    {
        a= (arr[mid]+arr[mid-1])/2;
        cout<<"Median : "<<a;
    }
    else
    {
        a= arr[mid];
        cout<<"Median : "<<a;
    }
}

int main()
{
    int arr1[5]= {1, 3, 4, 5, 6};
    int arr2[6]= {11, 15, 17, 19, 23, 25};
    int n= sizeof(arr1)/ sizeof(arr1[0]);
    int m= sizeof(arr2)/ sizeof(arr2[0]);
    median(arr1, arr2, n, m);
    
    return 0;
}