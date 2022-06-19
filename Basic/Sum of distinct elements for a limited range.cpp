// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	int sumOfDistinct(int arr[], int n) 
	{ 
	    // Your code goes here
	    unordered_map<int,int> mappa;
	    
	    for (int i=0; i<n; i++)
	    {
	        mappa[arr[i]]++;
	    }
	    
	    int ans = 0;
	    for (auto i : mappa)
	    {
            //cout << i.first << " " << i.second << endl;
            ans += i.first;
	    }
	    
	    return ans;
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
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    

       

        Solution ob;
        cout << ob.sumOfDistinct(a,n);
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends