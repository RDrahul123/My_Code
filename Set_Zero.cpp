#include<iostream>
#include<vector>
using namespace std;

void print1(vector<vector<int>> nums)
{
    int n= nums.size();
    cout<<"[";
    for(int i=0; i<n; i++)
    {
        cout<<"[";
        for(int j=0; j<n; j++)
        {
            cout<<nums[i][j]<<",";
        }
        cout<<"],";
    }
    cout<<"]";
}

void setZeroes(vector<vector<int>> matrix) 
{
    int n= matrix.size();
    int m= matrix[0].size();
    bool row[n];
    bool col[m];
    for(int i=0; i<n; i++)
    {
        row[i]= false;
    }
    for(int j=0; j<m; j++)
    {
        col[j]= false;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]= true;
                col[j]= true;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(col[i] || row[j])
                matrix[i][j]=0;
        }
    }
    print1(matrix);
}

int main()
{
    vector<vector<int>> a
    {
        {1, 2, 4}, 
        {1, 0, 1}, 
        {1, 1, 1}
    };
    setZeroes(a);
    return 0;
}