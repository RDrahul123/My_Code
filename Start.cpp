#include<iostream>
#include<string.h>
using namespace std;

int main()
{
        string str;
        int i;
        getline(cin, str);
        cout<<"Reverse string is: ";
        for(i=str.length(); i>=0; i--)
        {
            cout<<str[i];
        }
    return 0;
}
