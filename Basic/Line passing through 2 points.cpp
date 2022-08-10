//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string getLine(int a, int b, int c, int d)
    {
        // code here
        string ans = "";
        
        if (a != c)
        {
            int x1 = d-b;
            int y1 = a-c;
            
            int  t = b*(a-c)+a*(d-b);
            
            ans += to_string(x1);
            ans += "x";
            
            if (y1>0) ans += "+";
            ans += to_string(y1);
            ans += "y";
            ans += "=";
            ans += to_string(t);
            return ans;
        }
        else if (b!=d)
        {
            ans = "x=";
            ans += to_string(a);
            return ans;
        }
        
        
        return "0x+0y=0";
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        
        Solution ob;
        cout<<ob.getLine(a, b, c, d)<<endl;
    }
    return 0;
}
// } Driver Code Ends