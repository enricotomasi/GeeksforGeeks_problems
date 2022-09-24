//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    long long rectNum(long long N, long long M)
    {
        // code here
        // Hint
        //
        // If the grid is 1×1, there is 1 rectangle.
        // If the grid is 2×1, there will be 2 + 1 = 3 rectangles
        // If it grid is 3×1, there will be 3 + 2 + 1 = 6 rectangles.
        
        
        int m = pow(10,9)+7;
        
        int ans = 1;
        
        long long int h = 0;
        for (int i=1; i<=N; i++)
        {
            h+=i;
        }
        
        long long int w = 0;
        for (int i=1; i<=M; i++)
        {
            w+=i;
        }
        
        
        ans = (h*w)%m;
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N, M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.rectNum(N,M) << endl;
    }
    return 0;
}
// } Driver Code Ends