//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    int kLevelSum(int K, string S) 
    {
        // code here
        int n = S.length();
        int livello = -1;
        int ans = 0;
        string temp = "";
        
        for (int i=0; i<n; i++)
        {
            char c = S[i];
            
            if (livello == K && temp != "" && (c == '(' || c == ')'))
            {
                ans += stoi(temp);
                temp = "";
            }
            
            if (c == '(')
            {
                livello++;
            }
            else if (c == ')')
            {
                 livello--;
            }
            else if (livello == K)
            {
                // cout << c << " ";
                temp +=c;
            }
        }
     
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>K;
        cin>>S;

        Solution ob;
        cout << ob.kLevelSum(K,S) << endl;
    }
    return 0;
}
// } Driver Code Ends