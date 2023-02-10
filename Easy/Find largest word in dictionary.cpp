//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution 
{
  public:
    string findLongestWord(string S, vector<string> d) 
    {
        // code here
        int n = d.size();
        int nS = S.length();
        
        vector<string> parole;
        int lun = 0;
        
        for (int i=0; i<n; i++)
        {
            string p = d[i];
            int nP = p.length();
            
            int j=0;
            int k=0;
            
            bool ok = true;
          
            while (j < nP)  
            {
                //cout << p[j] << " - " << S[k] << endl;
                if (k >= nS)
                {
                    ok = false;
                    break;
                }
                
                if (p[j] == S[k])
                {
                    j++;
                    k++;
                }
                else k++;
            }
          
            if (ok)
            {
                //cout << p << " " << j << " " << nP << endl;
                parole.push_back(p);
                lun = max(lun, nP);
            }
            
            //cout << endl;
        }
        
        sort (parole.begin(), parole.end());
        
        int nParole = parole.size();
        for (int i=0; i<parole.size(); i++)
        {
            if (parole[i].length() == lun) return parole[i];
        }
        
        
        return "";
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> d(n + 1);
        for (int i = 0; i < n; i++) cin >> d[i];
        string S;
        cin >> S;
        Solution ob;
        cout << ob.findLongestWord(S, d) << endl;
    }
    return 0;
}

// } Driver Code Ends