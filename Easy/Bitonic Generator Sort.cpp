//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	  
	void bitonicGenerator(int arr[], int n)
	{
		// Your code goes here
		vector<int> pari;
		vector<int> dispari;
		
		for (int i=0; i<n; i++)
		{
		    if (i % 2 == 0) pari.push_back(arr[i]);
		    else            dispari.push_back(arr[i]);
		}
		
		sort(pari.begin(), pari.end());
	    
	    sort(dispari.begin(), dispari.end());
	    reverse(dispari.begin(), dispari.end());
	    
	    int i = 0;
	    
	    for (auto it : pari)
	    {
	        arr[i] = it;
	        i++;
	    }
	   	
	   	for (auto it: dispari)
	   	{
	   	    arr[i] = it;
	   	    i++;
	   	}
	   	
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
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];


        

        Solution ob;
        ob.bitonicGenerator(arr, n);
        
        for (int i = 0; i < n; i++) 
        	cout << arr[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends