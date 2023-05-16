//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:

int ric (int temp , int pos , int m , int n)
{
        int ans = 0;
        if (n == pos) return 1;
        
        for (int i=temp*2; i <= m ; i++)
        {
            ans += ric(i, pos+1, m, n);
        }
        
        return ans;
    }
    
    int numberSequence(int m, int n)
    {
        // code here
        int ans = 0;
        
        for (int i=1; i<=m; i++)
        {
            ans += ric(i, 1, m, n);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        
        Solution ob;
        cout<<ob.numberSequence(m, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends