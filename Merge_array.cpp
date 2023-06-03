#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int> nums1, int m, vector<int> nums2, int n) {
        vector<int> a;
        for(int i=0; i<m; i++)
        {
            a.push_back(nums1[i]);
        }

        for(int i=0; i<n; i++)
        {
            a.push_back(nums2[i]);
        }
        
        sort(a.rbegin(), a.rend());
        for(int i=a.size(); i>0; i--)
        {
            if(a[i]==0)
                a.pop_back();
        }
        sort(a.begin(), a.end());
        for(int i=0; i<a.size(); i++)
            cout<<a[i]<<" ";
    }

int main()
{
    vector<int> nums3 {1,2,3,0,0,0};
    vector<int> nums4 {2, 5, 6};
    int m= nums3.size();
    int n= nums4.size();
    merge(nums3, m, nums4, n);
    return 0;
}