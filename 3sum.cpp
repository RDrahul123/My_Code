#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) 
{
    vector<int> triplet;
    vector<vector<int>> ans;
    for(int i=0; i<nums.size(); i++)
    {
        for(int j=i+1; j<nums.size(); j++)
        {
            for(int k=j+1; k<nums.size(); k++)
            {
                if(nums[i]+nums[j]+nums[k] == 0 && i!=j && j!=k && k!=i)
                {
                    triplet.push_back(nums[i]);
                    triplet.push_back(nums[j]);
                    triplet.push_back(nums[k]);
                }
            }
        }
    }
    ans.push_back(triplet);
    return ans;
}

int main()
{
    vector<int> nums{-1,0,1,2,-1,-4};
    vector<vector<int>> ans = threeSum(nums);
    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
    }
    return 0;
}