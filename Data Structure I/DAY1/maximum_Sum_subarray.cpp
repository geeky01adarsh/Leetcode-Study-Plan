// Question Link :- https://leetcode.com/problems/maximum-subarray/

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int ans = nums[0], i, j, sum = 0;
    for (i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        ans = max(sum, ans);
        sum = max(sum, 0);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        cout<<maxSubArray(nums)<<endl;
    }
    return 0;
}