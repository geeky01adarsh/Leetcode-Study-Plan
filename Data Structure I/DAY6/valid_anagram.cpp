#include <bits/stdc++.h>

using namespace std;

bool isAnagram(string s, string t)
{
    // using arrayas we only have 26 chars
    if (s.length() != t.length())
        return false;
    int n = s.length();
    int counts[26] = {0};
    for (int i = 0; i < n; i++)
    {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
        if (counts[i])
            return false;
    return true;

    // using sorting algo
    // sort(s.begin(), s.end());
    // sort(t.begin(), t.end());
    // return s==t;
}

int main()
{
    string x, y;
    cin >> x >> y;
    cout<<isAnagram(x,y)<<endl;
    return 0;
}