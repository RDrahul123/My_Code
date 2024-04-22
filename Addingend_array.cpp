#include<iostream>
#include<vector>
using namespace std;

vector<int> addarray(vector<int> nums)
{
    vector<int> arr;
    for(auto i=0; i<nums.size(); i++)
    {
        arr.push_back(nums[i]);
    }
    for(auto i=0; i<nums.size(); i++)
    {
        arr.push_back(nums[i]);
    }
    return arr;
}

int main()
{
    vector<int> nums {0, 1, 2, 3, 4};
    vector<int> ans=addarray(nums);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}