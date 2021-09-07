#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> matrix, int target)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        if (target >= matrix[i][0] && target <= matrix[i][matrix[i].size() - 1])
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == target)
                    return 1;
            }
        }
    }
    return 0;
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
    int tar;
    cin >> tar;
    cout<<searchMatrix(v,tar)<<endl;
    return 0;
}