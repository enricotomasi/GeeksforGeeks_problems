//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    vector<int> numAndDen(int n, int d)
    {
        // code here
        /*
        
            You have to find out p/q where, 
            p/q < n/d
            pd < qn
            pd <= qn-1 .
        
        */
        
        int num = -1;
        int den = 1;
        
        for (int i=d+1; i < 10001; i++)
        {
            int j = (n*i)/d;
            if (__gcd(j,i) == 1) 
            {
                if (1.0 * j/i > 1.0 * num/den)
                {
                    num = j;
                    den = i;
                }
        }
    }
    
    return {num, den};
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,d;
        cin >> n >> d;
        Solution ob;
        vector<int>ans=ob.numAndDen(n,d);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends