//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    void prank(long long a[], int n)
    {
        // code here
        vector<int> ans;
        
        for (int i=0; i<n; i++)
        {
            ans.push_back(a[i]);
        }
        
        for (int i=0; i<n; i++)
        {
            a[i] = ans[ans[i]];
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i = 0 ;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        ob.prank(a,n);

        for(int i = 0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
}


// } Driver Code Ends