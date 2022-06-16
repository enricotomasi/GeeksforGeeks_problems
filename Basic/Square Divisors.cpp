// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int squareFactor(long long N)
    {
        // code here
        int ans = 0;
        
        for (int i=1; i<=sqrt(N); i++)
        {
            if (N%(int)pow(i,2)==0)
            {
                ans++;
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        
        Solution ob;
        cout<<ob.squareFactor(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends