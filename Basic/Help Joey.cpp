//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int countSCC(int a,int b)
    {
        // Write Your Code here
        
        if (a==b*2) return b;
        
        if (b*2 >a) return a/2;
        
        int rimc = (a-2*b) /4;
        
        return b+rimc;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;cin>>a>>b;
        Solution ob;
        int ans  = ob.countSCC(a,b);
      
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends