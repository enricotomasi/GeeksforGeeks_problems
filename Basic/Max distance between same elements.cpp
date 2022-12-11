//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
        //Code here
        map<int, int> mappa;
        
        for (int i=0; i<n; i++)
        {
            mappa[arr[i]] = i;
        }
        
        int ans = 0;
        
        for (auto it : mappa)
        {
            int numero = it.first;
            int ultima = it.second;
            int prima = 0;
            
            while (arr[prima] != numero) prima++;
            
            int distanza = ultima-prima;
            ans = max(ans, distanza);
        }
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends