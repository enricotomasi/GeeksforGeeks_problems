//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{

	public:
	int getIndexInSortedArray(int arr[], int n, int idx)
	{
	    // Your code goes here
	    
	    int ans = 0;
	    
	    for (int i=0; i<n; i++)
	    {
	        if (arr[i] < arr[idx]) ans++;
	        else if (arr[i] == arr[idx] && i<idx) ans++;
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
    	int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;++i)
        	cin>>a[i];


        
        Solution ob;
        cout << ob.getIndexInSortedArray(a,n,k);
        
	    cout << "\n";
	     
    }
    return 0;
}




// } Driver Code Ends