#include<iostream>
#include<vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int> nums, int n) 
{
    vector<bool> ans;
    int maxi= *max_element(nums.begin(), nums.end)
    for(auto i=0; i<nums.size(); i++)
    {
        int a= nums[i]+n;
        if(a>=maxi)
            ans.push_back(true);
        else
            ans.push_back(false);
    }
    return ans;
}

int main()
{
    vector<int> nums{2, 3, 5, 1, 4};
    int extraCandies = 3;
    vector<bool> ans = kidsWithCandies(nums, extraCandies);
    for (auto i = 0; i < ans.size(); i++)
    {
        cout<<ans[i];
    }
    return 0;
}