#include<iostream>
#include<vector>
using namespace std;

vector<long long> distance(vector<int>& nums)
{
    vector<long long> ans;
    int a;
    for(auto i=0; i<nums.size(); i++)
    {
        for(auto j=i+1; j<nums.size(); j++)
        {
            if(nums[i]==nums[j])
            {
                a+=i-j;
                ans.push_back(a);
            }
            else
                ans.push_back(0);
        }
    }
    return ans;
}

int main()
{
    vector<int> nums{1, 5, 1, 1, 2};
    vector<long long> dist = distance(nums);
    for(int i = 0; i < dist.size(); i++)
    {
        cout<<dist[i]<<endl;
    }
    return 0;
}