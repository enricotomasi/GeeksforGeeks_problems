//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void ric(int arr[], int a, int b, int n)
	{
	    if (n <= 0) return;
	    
	    int first = arr[a];
	    int second = arr[b];
	    
	    ric(arr, a - 1, b - 1, n - 2);
	    
	    arr[n - 2] = first;
	    arr[n - 1] = second;
	    
	}
	
	void shuffleArray(int arr[], int n)
	{
	    // Your code goes here
	    ric(arr, n/2 - 1, n - 1, n);
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
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends