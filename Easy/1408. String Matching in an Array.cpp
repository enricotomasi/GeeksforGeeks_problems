class Solution
{
public:
    vector<string> stringMatching(vector<string> &words)
    {
        set<string> s;

        for (auto it : words)
        {
            // cout << it << endl;

            for (auto it2: words)
            {    
                // cout << "  ---> " << it2 << " " << (it != it2) <<  " " << it.contains(it2) << endl;
                if (it != it2 && it.contains(it2))
                {
                    // cout << "  ---> " << it2 << " bingo!" << endl;
                    s.insert(it2);
                }
            }
        }

        vector<string> ans;

        for (auto it : s)
        {
            ans.push_back(it);
        }

        return ans;                

    }
        

};
