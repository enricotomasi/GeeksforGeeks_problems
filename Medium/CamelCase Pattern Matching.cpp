//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) 
    {
        // code here
        int np = Pattern.size();
        //cout << "np:" << np << endl; 
        
        vector<string> ans;
        
        for (auto s : Dictionary)
        {
            //cout << endl << s << endl;
        
            int j = 0;
            
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    //cout << "uppercase" << endl;
                    if (s[i] == Pattern[j])
                    {
                        //cout << "bigno!" << endl;
                        j++;
                    }
                    else
                    {
                        //cout << "bad :(" << endl;
                        break;
                    }
                }
             
                //cout << "j: " << j << endl;
            }
            
            if (j == np)
            {
                //cout << "add !!!" << endl;
                ans.push_back(s);
            }
        }
        
        if (ans.size() == 0)
        {
            ans.push_back("-1");
        }
        else
        {
            sort(ans.begin(), ans.end());
        }
        
        //cout << endl << " **** " << endl;
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
