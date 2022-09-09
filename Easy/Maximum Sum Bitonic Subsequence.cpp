//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
int maxSumBS(int arr[] , int n );

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<maxSumBS(a,n)<<endl;
		
	}
}
// } Driver Code Ends



int maxSumBS(int arr[] , int n )
{
    
    // We construct two arrays MSIBS[] and MSDBS[].
    // MSIBS[i] stores the sum of the Increasing subsequence ending with arr[i].
    // MSDBS[i] stores the sum of the Decreasing subsequence starting from arr[i]. 
    // Finally, we need to return the max sum of MSIBS[i] + MSDBS[i] – Arr[i]
    
    
    int dpi[n] = {}; 
    int dpd[n] = {};
    
    for (int i=0; i<n; i++)
    {
        int somma = 0;
         for (int j=0; j<i; j++)
         {
             if (arr[j] < arr[i]) somma = max(somma, dpi[j]);
         }
         dpi[i] = arr[i]+somma;
    }
    
    for (int i=n-1; i>=0; i--)
    {
        int somma = 0;
        for (int j=n-1; j>i; j--)
        {
            if (arr[i]>arr[j]) somma = max(somma, dpd[j]);
        }
        dpd[i] = arr[i]+somma;
    }
    
    int ans = 0;
    
    for (int i=0; i<n; i++)
    {
        ans = max(ans,dpi[i]+dpd[i]-arr[i]);
    }
    
    return ans;
  
    
}
