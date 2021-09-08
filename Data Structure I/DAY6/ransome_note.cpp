#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
    int arr[26] = {0};
    for (int i = 0; i < magazine.size(); i++)
    {
        arr[magazine[i] - 'a'] += 1;
    }
    for (int i = 0; i < ransomNote.size(); i++)
    {
        if (!arr[ransomNote[i] - 'a'])
            return 0;
        else
            arr[ransomNote[i] - 'a']--;
    }
    return 1;
}

int main()
{
    string x, y;
    cin >> x >> y;
    cout << canConstruct(x, y) << endl;
    return 0;
}