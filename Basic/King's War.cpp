//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    long long SoldierRequired(long long a[], long long n)
    {
        // Your code goes here   
        if (n<=2) return 0;
        
        
        sort (a,a+n);
        long long debole = a[0];
        long long forte = a[n-1];
        
        long long conta = 2;
        for (long long i=1; i<n-1; i++)
        {
            if (a[i] == debole || a[i] == forte) conta++;
        }
        
        return n-conta;
        
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.SoldierRequired(a, n)<<endl;
    }
	return 0;
}
// } Driver Code Ends