#include<iostream>
using namespace std;

int alphabet(char arr[], int n, char a)
{
    int mid;
    int low=0;
    int high= n;
    char res;
    while (low<=high)
    {
        mid= (low+high)/2;
        if(arr[mid]==a)
            low= mid+1;
        else
        if(arr[mid]<a)
            low=mid+1;
        else
        if(arr[mid]>a)
        {
            res= arr[mid];
            high=mid-1;
        }
    }
    return res;
}

int main()
{
    char arr[5]= {'a', 'b', 'e', 'f', 'h'};
    int n= sizeof(arr)/sizeof(arr[0]);
    char a;
    cout<<"Enter the alphabet : ";
    cin>>a;
    char ans= alphabet(arr, n, a);
    cout<<"Next alphabet is : "<<ans<<endl;
    return 0;
}