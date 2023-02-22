//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	vector<int> arrangeOddAndEven(int a[], int n) 
	{ 
	    // Your code goes here
	    vector<int> pari;
	    vector<int> dispari;
	    
	    for (int i=0; i<n; i++)
	    {
	        int cifra = a[i];
	        if (cifra % 2 == 0) pari.push_back(cifra);
	        else                     dispari.push_back(cifra);
	    }
	    
	    vector<int> ans;
	    
	    int p = 0;
	    int d = 0;

	    int i = 0;
	    while (i < n)
	    {
	        if (p >= pari.size())
	        {
	            ans.push_back(dispari[d]);
	            d++;
	        }
	        else if (d >= dispari.size())
	        {
	            ans.push_back(pari[p]);
	            p++;
	        }
	        else if (i %2 == 0)
	        {
	            ans.push_back(pari[p]);
	            p++;
	        }
	        else
	        {
	            ans.push_back(dispari[d]);
	            d++;
	        }
	        i++;
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
	    cin >> n;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    

       

        Solution ob;
        vector<int> ans;
	    ans=ob.arrangeOddAndEven(a,n);
	    for(int i=0;i<ans.size();i++)
	        cout << ans[i] << " ";
	   
        
	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends