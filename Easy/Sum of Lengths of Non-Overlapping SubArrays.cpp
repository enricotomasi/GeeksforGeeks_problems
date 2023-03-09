//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	int calculateMaxSumLength(int arr[], int n, int k)
	{
		// Your code goes here
	
		int conta = 0;
		bool ok = false;
		int ans = 0;
		
		for (int i=0; i<n; i++)
		{
		    if (arr[i] <= k) 
		    {
		        // cout << arr[i] << " ";
		        conta++;
		        if (arr[i] == k) ok = true;
		    }
		    else
		    {
		        // cout << endl;
		        if (ok) ans += conta;
		        conta = 0;
		        ok = false;
		    }
		    
		}
		
		if (ok) ans+=conta;
		
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
    	int n, tmp;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	   	}
	   	cin>>tmp;
            
        
        

        Solution ob;
		cout << ob.calculateMaxSumLength(arr, n, tmp);
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends