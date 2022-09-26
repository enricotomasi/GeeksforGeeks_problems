//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// To find minimum sum of unique elements.
long long int minSum(int arr[], int n);




int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << minSum(a, n) << endl;
        
    }
}
// } Driver Code Ends


long long int minSum(int arr[], int n)
{
	// Complete the function
	int ans = 0;
	int last = -1;
	for (int i=0; i<n; i++)
	{
	    if (last >= arr[i])
	    {
	        ans += arr[i-1]+1;
	        arr[i] = arr[i-1]+1;
	    }
	    else
	    {
	        ans += arr[i];
	    }
	   
	    last = arr[i];
	}

	return ans;
	
	
}