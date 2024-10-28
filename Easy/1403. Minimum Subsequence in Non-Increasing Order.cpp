class Solution
{
public:
    vector<int> minSubsequence(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int s1 = 0;

        for (auto it : nums)
        {
            s1 += it;
        }

        int s2 = 0;

        vector<int> ans;

        int i = nums.size() - 1; 

        while (s1 >= s2 && i >= 0)
        {
            ans.push_back(nums[i]);
            s1 -= nums[i];
            s2 += nums[i];
            i--;
            // cout << nums[i] << " s1: " << s1 << " " << s2 << endl;
        }


        return ans;
    }
};
