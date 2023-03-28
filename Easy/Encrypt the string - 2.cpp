//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string encryptString(string S)
    {
        // code here
        int n = S.length();
        string ans = "";
        int conta = 1;

        for (int i=0; i<n; i++)
        {
           
           if (S[i] == S[i+1]) conta++;
           else
           {
               ans.push_back(S[i]);
               int temp = conta;
               
               while (temp != 0)
               {
                   int r = temp % 16;
                   if (r < 10) ans.push_back(r + 48);
                   else        ans.push_back(r + 87);
                   
                   temp /= 16;
                   conta = 1;
               }
           }
       }
       
       reverse(ans.begin(), ans.end());
       
       return ans;

    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;

        Solution ob;
        cout<<ob.encryptString(S)<<endl;
    }
    return 0;
}
// } Driver Code Ends