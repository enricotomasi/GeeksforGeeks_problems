class Solution
{
public:
    int minStartValue(vector<int> &nums)
    {
        int ans = 0;
        int temp = 0;
        for (auto it : nums)
        {
            temp += it;
            if (temp < 1)
            {
                ans += (temp * - 1) + 1;
                temp = 1;
            }
        }

        if (ans == 0) return 1;
        
        return ans;
    }
};
