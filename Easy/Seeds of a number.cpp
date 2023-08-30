//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<int> seeds(int n)
    {
        // code here
        vector<int> ans;
        
        for (int i=1; i<n; i++)
        {
            int molt = i;
            int copia = i;
            
            while (copia)
            {
                int digit = copia % 10;
                copia /= 10;
                molt *= digit;
            }
            
            if (molt == n)
            {
                ans.push_back(i);
                // cout << i << endl;
            }
        
        }
        
        
        if (ans.size() <= 0) return {-1};
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.seeds(n);
        for(int v: ans)
            cout<<v<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends