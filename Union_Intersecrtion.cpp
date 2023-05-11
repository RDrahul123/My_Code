#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sort(int arr[], int n)
{
    int temp;
    for(int j=0; j<=n-1; j++)
    {
        for(int i=0; i<=n-j-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp= arr[i];
                arr[i]= arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}

void print(int arr[], int n)
{
    cout<<"[ ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

void union_intersection(int arr1[], int arr2[], int n1, int n2)
{
    vector<int> v1(n1+n2);
    vector<int>::iterator it, st;

    it = set_union(arr1, arr1 + n1, arr2, arr2 + n2, v1.begin());

    cout << "\nAfter joining:\n";
    for (st = v1.begin(); st != it; ++st)
        cout << *st << ", ";
    cout << '\n';
}

int main()
{
    int i, j;
    int arr1[5]= {4,6,7,3,2};
    int arr2[5]= {1,3,9,6,5};
    
    int n1= sizeof(arr1)/sizeof(arr1[0]);
    int n2= sizeof(arr2)/sizeof(arr2[0]);

    sort(arr1, n1);
    sort(arr2, n2);
    print(arr1, n1);
    cout<<endl;
    print(arr2, n2);
    cout<<endl;

    union_intersection(arr1, arr2, n1, n2);  
    
    return 0;
}