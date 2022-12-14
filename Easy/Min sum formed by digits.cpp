//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        // Your code goes here
        if (n==1) return arr[0];
        
        sort(arr, arr+n);
        
        long long int primo = 0;
        long long int secondo = 0;
        
        for (int i=0; i<n; i++)
        {
            if (i%2 == 0) primo = primo *10 + arr[i];
            else          secondo = secondo *10 + arr[i];
        }
        
        return primo+secondo;
        
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
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends