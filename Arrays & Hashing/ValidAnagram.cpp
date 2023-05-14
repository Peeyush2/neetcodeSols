class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        unordered_map<char, int> word_count;
        int n = s.length();
        int n2 = t.length();
        if (n != n2)
            return false;
        for (int i = 0; i < n; i++)
        {
            word_count[s[i]]++;
        }
        for (int i = 0; i < n2; i++)
        {
            word_count[t[i]]--;
        }

        for (auto i : word_count)
        {
            if (i.second != 0)
                return false;
        }
        return true;
    }
};