//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends


class Solution
{
    public:
    long long pairWithMaxSum(long long arr[], long long N)
    {
        // Your code goes here

        long long int ans = -1;
        for (int i=1; i<N; i++)
        {
            long long int somma(arr[i] + arr[i-1]);
            ans = max(ans, somma);
        }
        
        return ans;
    }
};



//{ Driver Code Starts.
int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
	    for(ll i=0;i<n;i++)
		    cin>>a[i];
		Solution ob;
	    cout<<ob.pairWithMaxSum(a,n)<<endl;
	}
	return 0;
}


// } Driver Code Ends