//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<int> recamanSequence(int n)
    {
        // code here
        set<int> mappa;
        vector<int> ans;
        
        ans.push_back(0);
        mappa.insert(0);
        
        for (int i=1; i<n; i++)
        {
            int last = ans[ans.size()-1];
            int el = last - i;
            
            if (el > 0 && mappa.find(el) == mappa.end())
            {
                mappa.insert(el);
                ans.push_back(el);
            }
            else
            {
                mappa.insert(last + i);
                ans.push_back(last + i);
            }
            
        }
        
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
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends