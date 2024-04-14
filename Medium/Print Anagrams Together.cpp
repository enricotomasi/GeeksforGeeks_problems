//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    vector<vector<string>> Anagrams(vector<string>& string_list)
    {
        //code here
        map<string, vector<string>> dic;
        
        for (auto it : string_list)
        {
            int m[26] = {};
            for (auto c : it)
            {
                m[c - 'a']++;
            }
            
            string sig = "";
            for (int i = 0; i < 26; i++)
            {
                if (m[i] != 0)
                {
                    sig += (char)(i + 'a') + to_string(m[i]);
                }
            }
            
            //cout << sig << endl;
            
            if (dic.find(sig) == dic.end())
            {
                vector<string> temp;
                temp.push_back(it);
                dic[sig] = temp;
            }
            else
            {
                dic[sig].push_back(it);
            }
  
        }
        
        vector<vector<string>> ans;
        
        for (auto it : dic)
        {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

// } Driver Code Ends