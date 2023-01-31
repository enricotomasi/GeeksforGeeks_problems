//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    
    void helper(vector<int> &ans, int N, int& n, int piatto1, int piatto2, int piatto3)
    {
       if (N == 0 || n == 0) return;

       if(N == 1)
       {
           n--;
           if(n==0)
           {
               ans.push_back(piatto1);
               ans.push_back(piatto2);
           }
           return;
       }
       
       helper(ans, N-1, n, piatto1, piatto3, piatto2);
       helper(ans, 1,   n, piatto1, piatto2, piatto3);
       helper(ans, N-1, n, piatto3, piatto2, piatto1);
    }
  
    vector<int> shiftPile(int N, int n)
    {
        // code here
        vector<int>ans;
        helper(ans, N,n,1,3,2);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends