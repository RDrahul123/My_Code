#include<iostream>
#include<string.h>
using namespace std;

int main()
{
        string str;
        int i;
        cout<<"Enter the string: ";
        getline(cin, str);
        cout<<"Reverse string is: ";
        for(i=str.length(); i>=0; i--)
        {
            cout<<str[i];
        }

        cout<<endl;

    return 0;
}
