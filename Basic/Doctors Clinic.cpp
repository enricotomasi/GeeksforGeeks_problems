// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int waitingTime(int N, int X)
    {
        // code here
        int arTime = (N-1)*X;
        int totTime = 10*(N-1);
        
        int ans = totTime-arTime;
        
        if (ans < 0) ans = 0;
        
        return ans;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int N, X;
        cin>>N>>X;
        
        Solution ob;
        cout<<ob.waitingTime(N, X)<<"\n";
    }
    return 0;
}  // } Driver Code Ends