class Solution
{
public:
    int countLargestGroup(int n)
    {
        vector<int> v(50,0);

        int m = 0;
        
        for (int i = 1; i <= n; i++)
        {
            int temp = i;
            int s = 0;
            
            while (temp > 0)
            {
                s += temp % 10;
                temp /= 10;
            }

            v[s]++;
            m = max(m, v[s]);
        }

        int ans = 0;
        
        for (auto it : v)
        {
            if (it == m)
            {
                ans++;
            }
        }

        return ans;
    }
};
