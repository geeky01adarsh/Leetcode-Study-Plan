#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> res;
    for (auto i = 0; i < numRows; ++i)
    {
        res.push_back(vector<int>(i + 1, 1));
        for (auto j = 1; j < i; ++j)
            res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans = generate(n);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}