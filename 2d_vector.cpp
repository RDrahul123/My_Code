#include<iostream>
#include<vector>
using namespace std;

void ls(vector<vector<int>>& v, int n, int x)
{
    for(auto i=0; i<n; i++)
    {
        for(auto j=0; j<v[i].size(); j++)
        {
            if(v[i][j]==x)
            {
                cout<<"\nElement found at : "<<i<<", "<<j;
            }
        }
    }
}

int main()
{
    vector<vector<int>> v
    {
        {1, 2, 3}, 
        {4, 5, 6},
        {7, 8, 9}
    };

    int n= v.size();
    cout<<"\nEnter the element to searched : ";
    int x;
    cin>>x;
    ls(v, n, x);
    return 0;
}