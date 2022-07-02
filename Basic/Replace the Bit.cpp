// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    int replaceBit (int n, int k)
    {
        //code here.
        int l = log2(n)+1;
        
        if (l < k) return n;
        
        return n&(~(1<<(l-k)));
        
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        Solution ob;
        cout <<ob.replaceBit (n, k) << endl;
    }
    return 0;
}

  // } Driver Code Ends