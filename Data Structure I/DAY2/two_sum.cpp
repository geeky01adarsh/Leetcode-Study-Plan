#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int x)
{
    // brute-force approach
    // time complexity - O(n^2) && Space Complexity - O(1)
    // vector<int> ans;
    // for(int i=0; i<nums.size(); i++){
    //     for(int j=0; j<nums.size(); j++){
    //         if(nums[i]+nums[j]==x && i!=j){
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }
    // return ans;

    // better approach
    // time complexity - O(n) && Space Complexity - O(n)
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        auto p = mp.find(x - nums[i]);
        if (p != mp.end())
        {
            return {p->second, i};
        }
        mp[nums[i]] = i;
    }
    return {0, 0};
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, target;
        cin >> n >> target;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        vector<int> ans = twoSum(nums, target);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
