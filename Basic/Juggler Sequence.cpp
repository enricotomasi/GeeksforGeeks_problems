// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<int> jugglerSequence(int N)
    {
        // code here
        
        vector<int> ans = { };
        ans.push_back(N);
        
        while (N!=1)
        {
            if (N%2!=0) N = pow(N,1.5);
            else N = pow(N,0.5);
            ans.push_back(N);
        }
        
        return ans;
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
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends