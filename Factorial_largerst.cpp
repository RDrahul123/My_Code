#include<iostream>
using namespace std;

int main()
{
    int n;
    long z=1.0;
    cout<<"Enter the number : ";
    cin>>n;
    if(n<0)
    cout<<"Negtive Number...Factorial not exist";
    else
    {
        for(int i=1; i<=n; ++i)
        {
            z*=i;
        }
    }
    cout<<"Factorial of "<<n<<" is : "<<z;
    return 0;
}