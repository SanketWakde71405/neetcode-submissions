class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    map<string, vector<string>> mp;

    string dup;
    for (int i = 0; i < strs.size(); i++)
    {
        dup = strs[i];
        sort(dup.begin(), dup.end());
        mp[dup].push_back(strs[i]);
    }

    vector<vector<string>> subLists;

    for (auto p : mp)
    {
        subLists.push_back(p.second);
    }

    return subLists;
}
};
