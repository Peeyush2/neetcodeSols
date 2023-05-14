class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> umap;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            if (umap.empty())
            {
                umap[nums[i]] = i;
                continue;
            }

            auto j = umap.find(target - nums[i]);

            if (j != umap.end())
            {
                result.push_back(i);
                result.push_back(j->second);
                return result;
            }

            umap[nums[i]] = i;
        }

        return {};
    }
};