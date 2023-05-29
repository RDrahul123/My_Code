#include<iostream>
#include<vector>
using namespace std;

vector<int> buildarray(vector<int> nums)
{
    vector<int> a;
    for(int i=0; i<nums.size(); i++)
    {
        a.push_back(nums[nums[i]]);
    }
    return a;
}

int main()
{
    vector<int> nums {0,2,1,5,3,4};
    vector<int> ans=buildarray(nums);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}