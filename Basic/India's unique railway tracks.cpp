//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int isConnected(int a, int b)
    {
        // code here
        if (a==b) return true;
        
        int uno = min(a,b);
        int due = max(a,b);
        
        if (uno == 1)
        {
            if (due == 2 || due == 3) return true;
            return false;
        }
        
        if (uno == 2)
        {
            if (due == 1 || due == 4) return true;
            return false;
        }
        
        
        if (due-uno == 2 || due-uno == -2) return true;
        
        if (uno%2==0)
        {
            if (due-uno == -1) return true;
        }        
        else
        {
            if (due-uno == 1) return true;
        }
        
        
        
        return false;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        
        Solution ob;
        int ans = ob.isConnected(a, b);
        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends