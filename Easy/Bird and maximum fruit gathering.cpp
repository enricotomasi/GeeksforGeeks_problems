//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends

class Solution
{
    public:
    int maxFruits(int arr[], int n, int m)
    {
        int somma = 0;
        
        for (int i=0; i<m; i++) somma += arr[i];
    
        int ans = somma;
        
        if (m >= n) return somma;
        
        int fine = m;
        
        for (int i=0; i<n; i++)
        {
            somma -= arr[i];
            somma += arr[fine];
            
            ans = max(ans, somma);
            
            fine = (fine + 1) %n;
        }
        
        
        return ans;
    }
    
};

//{ Driver Code Starts.
int main() 
{
    int t,i,n,m,j;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(m>n)m=n;
        int a[n],sum=0,maxSum=0;
        for(i=0;i<n;i++)cin>>a[i];
        Solution ob;
        cout<<ob.maxFruits(a,n,m)<<"\n";
    }
	return 0;
}
// } Driver Code Ends