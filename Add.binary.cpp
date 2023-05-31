#include<iostream>
#include<string>
using namespace std;

string binary(string a, string b)
{
    string c;
    int x, y;
    x = a.size() - 1;
    y = b.size() - 1;
    for(int i=x; i>=0; i--)
    {
        for(int j= y; j>=0; j--)
        {
            if(a[i]==1 && b[i]==1)
            {
                
            }
        }
    }
    return c;
}

int main()
{
    string a= "1010";
    string b= "1011";
    string c = binary(a,b);
    cout<<c<<endl;
    return 0;
}