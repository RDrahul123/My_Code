#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void movezeroes(vector<int> nums)
{
    int n=nums.size();
    int d= -1;
    vector<int> temp;
    for(int i=0; i<n; i++)
    {
        if(nums[i]!=0)
            temp.push_back(nums[i]);
    }

    for(int i=n; i>=0; --i)
    {
        if(nums[i]==0)
            temp.push_back(nums[i]);
    }
    nums.clear();
    for(int i=0; i<n; i++)
    {
        nums.push_back(temp[i]);
    }

    for(int  i=0; i<n; i++)
    {
        cout<<nums[i]<<" ";
    }

    
    
}

int main()
{
    vector<int> nums {3, 12, 0, 1, 0, 2};
    movezeroes(nums);
    return 0;
}