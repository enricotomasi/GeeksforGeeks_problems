//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
  public:
  
   bool valid(string& n)
   {
        int i = 0;
        while (i < n.size())
        {
            int num = 0;
            int s = 0;
            
            while(i < n.size() and n[i] != '.')
            {
                num = num * 10 + (n[i] - '0');
                if(num > 255) return false;
                s++;
                i++;
            }
            
            if(!s or (s > 1 and !(num/(int)pow(10,s-1)))) return false;
            
            i++;
        }
        
        return true;
    }
    
    void ric(string& s, int cur, int n, int numDots, vector<string>& r, string ans)
    {
        if(!numDots and cur == n)
        {
            if(valid(ans)) r.push_back(ans);
            return;
        }
        else if (cur == n) return;
        
        if (!cur) ric(s,cur +1 , n,numDots, r, ans+s[cur]);
        else
        {
            ric(s,cur+1,n,numDots-1, r, ans + '.' + s[cur]);
            ric(s,cur+1, n, numDots, r, ans+s[cur]);
        }
    }
    
    vector<string> genIp(string &s) 
    {
        // Your code here
        int n = s.size();
        if(n > 12 or n < 4) return {};
        
        vector<string> ans;
        ric(s, 0, n, 3, ans, "");
        
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        /*generating naively*/
        Solution obj;
        vector<string> str = obj.genIp(s);
        sort(str.begin(), str.end());
        if(str.size()==0)
            cout << -1 << "\n";
        else{
            for (auto &u : str) {
                cout << u << "\n";
            }
        }
    }
}
// } Driver Code Ends