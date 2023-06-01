#include<iostream>
using namespace std;

int main()
{
    int a, r;
    long sum= 0;;
    cout<<"Enter the number : ";
    cin>>a;

    while(a>0)
    {
        r= a%10;
        sum= (sum*10)+r;
        a= a/10;
    }
    cout<<sum<<endl;
    if(sum==a)
        cout<<"true";
    else
        cout<<"false";
}