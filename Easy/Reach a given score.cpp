//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends
// Complete this function



long long int count(long long int n)
{
	long long int table[n+1],i;
	memset(table, 0, sizeof(table));
	table[0]=1;                 // If 0 sum is required number of ways is 1.
	
	// Your code here
	for (int i=0; i<3; i++)
	{
	    for (int j=0; j<=n; j++)
	    {
	        if      (i==0 && j-3 >=0)  table[j] += table[j-3];
	        else if (i==1 && j-5 >=0)  table[j] += table[j-5];
	        else if (i==2 && j-10 >=0) table[j] += table[j-10];
	    }
	}
	
	
	return table[n];
}

//{ Driver Code Starts.



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends