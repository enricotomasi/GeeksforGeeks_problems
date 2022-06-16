// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int minStep(int H, int U, int D)
    {
        // code here
        int ans = 0;
        while (H>0)
        {
            ans++;
            H-=U;
            if (H<0) break;
            H+=D;
        }
        return ans;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int H, U, D;
        cin >> H >> U >> D;
        
        Solution ob;
        cout<<ob.minStep(H, U, D)<<"\n";
    }
    return 0;
}  // } Driver Code Ends