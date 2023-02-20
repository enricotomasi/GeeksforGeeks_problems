//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
    int sumOfAll(int l, int r)
    {
        // code here
        bool era[r+1];
        memset(era, true, sizeof(era));
        
        int ans = 0;
        era[0] = false;
        era[1] = false;
        
        for (int i=2; i<=r; i++)
        {
            if (era[i])
            {
                if (i>=l) ans += i;
                
                for (int j = i*2; j<=r; j+=i)
                {
                    era[j] = false;
                    if (j>=l) ans += i;
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
        int l, r;
        cin>>l>>r;
        Solution ob;
        cout<<ob.sumOfAll(l,r)<<endl;
    }
    return 0;
}

// } Driver Code Ends