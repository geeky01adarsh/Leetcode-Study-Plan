#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &v, int r, int c)
{
    int m = v.size(), n = v[0].size(), total = m * n;
    if (r * c != total)
        return v;
    vector<vector<int>> ans(r, vector<int>(c));
    for (int i = 0; i < total; i++)
        ans[i / c][i % c] = v[i / n][i % n];
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    int nn, mm;
    cin >> nn >> mm;
    vector<vector<int>> ans = matrixReshape(v, nn, mm);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}