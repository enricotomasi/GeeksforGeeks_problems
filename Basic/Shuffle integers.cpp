 
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	
	public:
	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	    vector<int> a = {};
	    
	    for (int i=0; i<n; i++)
	    {
	        a.push_back(arr[i]);
	    }
	    
	    int indice = 0;
	    for (int i=0; i<n/2; i++)
	    {
	        arr[indice] = a[i];
	        indice++;
	        
	        arr[indice] = a[i+(n/2)];
	        indice++;
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
}  // } Driver Code Ends