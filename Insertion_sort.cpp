#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp= *a;
    *a= *b;
    *b= temp;
}

void insertionsort(int arr[], int n)
{
    int i, j, key;
    for(int i=0; i<n; i++)
    {
        key=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[key])
                swap(arr[key], arr[j]);
        }
    }
}

int main()
{
    int arr[8]= {4, 7, 3, 2, 0, 9, 1, 5};
    int n= sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}