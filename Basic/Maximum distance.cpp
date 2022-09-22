//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    int maxDist(int N)
    {
        // code here
        // 100 l every bike (1l = 1km)
        // there are N bikes
        // You can transfer fuel from a bike to another bike (max 100 l)
        
        
        float ans = 100;
        if (N>1) ans += 50;
        
        while (N>2)
        {
            ans += (float)100/(float)N;    
            N--;
        }
    
        return (int)ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.maxDist(N) << endl;
    }
    return 0;
}
// } Driver Code Ends