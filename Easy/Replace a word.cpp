//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    string replaceAll(string s, string o, string n)
    {
        // code here
        string ans = "";
        
        int ns = s.length();
        int no = o.length();
        int nn = n.length();
        
        for (int i=0; i<ns; i++)
        {
            if (s[i] == o[0])
            {
                bool trovato = true;
                int cs = i+1;
                int co = 1;
                
                while (co < no)
                {
                    if (cs >= ns || s[cs] != o[co])
                    {
                        trovato = false;
                        ans += s[i];
                        break;
                    }
                    
                    cs++;
                    co++;
                }
                
                if (trovato)
                {
                    i += no-1;
                    ans += n;
                }
                
            }
            else
            {
                ans += s[i];
            }
        }
        
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string S, oldW, newW;
        getline(cin, S);
        getline(cin, oldW);
        getline(cin, newW);
        Solution ob;
        cout << ob.replaceAll(S, oldW, newW) << endl;
    }
    return 0;
}

// } Driver Code Ends