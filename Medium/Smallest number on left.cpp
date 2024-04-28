//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<int> leftSmaller(int n, int a[])
    {
        // code here
        vector<int> ans;
        
        for (int i = 0; i < n; i++)
        {
            int min = -1;
            for (int j = i - 1; j >= 0; j--)
            {
                if (a[j] < a[i])
                {
                    min = a[j];
                    break;
                }
            }
            
            ans.push_back(min);
            
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
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends