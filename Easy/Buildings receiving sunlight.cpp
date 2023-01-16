//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int longest(int arr[],int n)
    {
        // Write your code here
        int massimo = 0;
        int ans = 0;
        
        for (int i=0; i<n; i++)
        {
            int palazzo = arr[i];
            if (palazzo >= massimo) ans++;
            massimo = max(massimo, palazzo);
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
        int i, arr[n+5];
        for(i=0;i<n;i++)
        cin>>arr[i];
        Solution ob;
        cout<<ob.longest( arr, n )<<endl;
    }
    return 0;
}
// } Driver Code Ends