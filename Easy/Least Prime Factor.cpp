//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    vector<int> generaPrimi(int n)
    {
        bool primi[n + 1];
        memset(primi, true, sizeof(primi));
  
        for (int p = 2; p * p <= n; p++)
        {
            if (primi[p] == true)
            {
                for (int i = p * p; i <= n; i += p)
                primi[i] = false;
            }
        }
        
        vector<int> ans;
        
        for (int i=3; i<n; i++)
        {
            if (primi[i])
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
    
    
    vector<int> leastPrimeFactor(int n) 
    {
        // code here
        vector<int> primi;
        primi = generaPrimi(1001);
        
        vector<int> ans;
        
        if (n == 0) return ans;
        
        ans.push_back(69);
        ans.push_back(1);
 
        for (int i=2; i<=n; i++)
        {
            if (i % 2 == 0) ans.push_back(2);
            else
            {
                for (int j=0; j<1001; j++)
                {
                    if (i % primi[j] == 0)
                    {
                        ans.push_back(primi[j]);
                        break;
                    }
                }
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
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends