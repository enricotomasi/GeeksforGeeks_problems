//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    long long differentWaysToSpell(string N)
    {
        // code here
        int n= N.length();
        long long ans = 1;
        
        for (int i=0; i<n; i++)
        {
            int conta = 1;
            while (i<n-1 && N[i+1] == N[i])
            {
                conta++;
                i++;
            }
            
            ans *=  pow(2,conta-1);
        }
    
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string N;
        
        cin>>N;

        Solution ob;
        cout << ob.differentWaysToSpell(N) << endl;
    }
    return 0;
}
// } Driver Code Ends