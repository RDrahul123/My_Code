#include<iostream>
using namespace std;

void swap(int* x, int* y)
{
    int temp= *x;
    *x= *y;
    *y= temp;
}

void bubblesort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int main()
{
    int arr[10]= {1, 5, 6, 8, 2, 5, 2, 8, 0, 9};
    int m= sizeof(arr)/sizeof(arr[0]);
    int k;
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    bubblesort(arr, m);
    cout<<"Sorted array is : "<<"[ ";
    for(k=0; k<m; k++)
    {
        cout<<arr[k]<<", ";
    }
    cout<<"]";
    cout<<endl;
    cout<<a<<" smallest number is : "<<arr[a]<<endl;
       
    return 0;
}