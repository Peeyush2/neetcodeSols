#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> umap;
        for (auto i : nums)
            umap[i]++;
        for (auto i : umap)
            if (i.second >= 2)
                return true;
        return false;
    }
};

int main()
{
    Solution obj;
    vector<int> vect;
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(10);
    bool answer = obj.containsDuplicate(vect);
    cout << answer << "\n";
}
