// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    int numOfPerfectSquares(int a, int b)
    {
        // code here
        int ans = 0;
        
        for (int i=a; i<=b; i++)
        {
            if (sqrt(i) == ceil(sqrt(i)))
            {
                ans++;
                //cout << i << endl;
            }
                
        }
        
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        
        cin>>a>>b;

        Solution ob;
        cout << ob.numOfPerfectSquares(a,b) << endl;
    }
    return 0;
}  // } Driver Code Ends