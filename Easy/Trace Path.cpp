//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int isPossible(int n, int m, string s)
    {
        // code here
        int x=0;
        int y=0;
        
        int maxx = 0;
        int minx = 0;
            
        int maxy = 0;
        int miny = 0;
            
        for (auto c: s)
        {
            if      (c == 'L') x--;
            else if (c == 'D') y--;
            else if (c == 'R') x++;
            else if (c == 'U') y++;
            
            maxx = max(maxx, x);
            minx = min(minx, x);
            
            maxy = max(maxy, y);
            miny = min(miny ,y);
        }
        
        if ((maxx - minx) < m && (maxy - miny) < n) return 1;
        
        return 0;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.isPossible(n, m, s)<<endl;
    }
    return 0;
}
// } Driver Code Ends