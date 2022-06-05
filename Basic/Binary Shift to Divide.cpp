// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution
{
    public:
    int half(int N)
    {
        // code here
        
        if (N==1) return 1;
        
        return N >> 1;
        
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.half(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends