//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

	public:
	long long subCount(long long arr[], int N, long long K)
	{
	    // Your code goes here
	    unordered_map<long long, long long> mappa;
	    mappa.insert({0, 1});
	    
	    long long temp = 0;
	    long long resto = 0;
	    long long ans = 0;
	    
	    for (int i=0; i<N; i++)
	    {
	        temp += arr[i];
	        resto = temp %K;
	        
	        if (resto <0) resto += K;
	        
	        if (mappa.count(resto) > 0) ans += mappa[resto];
	        mappa[resto]++;
	    }
	    
	    
	    return ans;
	}
};


//{ Driver Code Starts.

int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	long long k;
		cin>>n >> k;
		long long a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
        

        Solution ob;
        cout << ob.subCount(a, n, k);
	    cout << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends