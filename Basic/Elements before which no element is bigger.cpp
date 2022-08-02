//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    long long countElements(long long arr[], long long n) 
    {
        // Your code goes here
        
        if (n == 0) return 0;
        if (n == 1) return 1;
        
        long long massimo = arr[0];
        long long ans = 1;
        
        for (long long i = 1; i<n; i++)
        {
            if (arr[i] > massimo)
            {
                ans++;
                massimo = arr[i];
            }
        }
        
        return ans;
        
    }
};


//{ Driver Code Starts.
int main()
 {
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long a[n];
	    for(long long i=0;i<n;i++)
	        cin>>a[i];
	    Solution ob;
	    cout<<ob.countElements(a, n)<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends