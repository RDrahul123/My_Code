#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
{
    int n= candidates.size();
    vector<int> v;
    vector<vector<int>> ans;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(candidates[i]+candidates[j]==target)
            {
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    ans.push_back(v);
    return ans;
}

int main()
{
    vector<int> nums {2,3,6,7};
    int target = 7;
    vector<vector<int>> ans = combinationSum(nums, target);
    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}