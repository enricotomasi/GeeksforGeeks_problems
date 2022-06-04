 
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   int rotazione = k%n;
	   
	   int arrCopia[n];
	   
	   copy_n(arr,n,arrCopia);
	   
	   for (int i=0; i<n; i++)
	   {
	       int pos = 0;
	       if (i+rotazione >=n)
	       {
	           pos = i-n+rotazione;
	           //cout << "N:" << n << " --- i:" << i << " --Rotazione:" << rotazione << "--pos:" << pos << "\n";
	       }
	       else
	       {
	           pos = i+rotazione;
	       }
	       
	       arr[i] = arrCopia[pos];
	   }
	   
	} 
		 

};

// { Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}


  // } Driver Code Ends