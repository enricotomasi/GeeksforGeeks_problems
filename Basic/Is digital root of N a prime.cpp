//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int digitalRoot(int N)
    {
        // Write Your Code here
        
        N = 1+ ((N-1) %9);
        
        if (N==2 || N==3 || N==5 || N==7) return true;
        
        return false;
 
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        int ans  = ob.digitalRoot(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends