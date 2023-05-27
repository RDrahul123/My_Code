#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp= *a;
    *a=*b;
    *b=temp;
}

int divide(int arr[], int a, int b)
{
    int x = arr[b];
    int i = a - 1;
    for (int j = a; j < b; j++)
    {
        if(arr[j]<=x)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }     
    }
    swap(&arr[i+1], &arr[b]);
    return (i+1);
}

void quicksort(int arr[], int m, int n)
{
    if(m<=n)
    {
        int p= divide(arr, m, n);

        quicksort(arr, m, p-1);
        quicksort(arr, p+1, n);
    }
}

int main()
{
    int arr[8]= {8, 7, 6, 1, 0, 9, 10, 2};
    int n= sizeof(arr)/sizeof(arr[0]);

    quicksort(arr, 0, n-1);
    cout<<"\nSorted array is : ";
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    return 0;
}