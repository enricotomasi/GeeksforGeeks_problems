//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	

	public:
	long long maxProductSubarrayOfSizeK(int arr[], int n, int k) 
	{ 
	    // Your code goes here
        sort(arr, arr+n);
	    long long ans = 1;
        
        if (arr[n-1] == 0 && k & 1) return 0;
        
        if (arr[n-1] < 0 & k & 1)
        {
            long long a1 = 1;
            for (int i = n-1; i >= n-k; i--)
            {
                a1 *= arr[i];
            }
            return a1;
        }
        
        int i = 0;
        int j = n-1;
        
        if (arr[j] > 0 && k & 1)
        {
            ans *= arr[j];
            k--;
            j--;
        }
    
        while (i <= j && k)
        {
            long long t1 = arr[i] * arr[i+1];
            long long t2 = arr[j] * arr[j-1];
            
            if (t1 > t2)
            {
                ans *= t1;
                i += 2;
                k -= 2;
            }
            else
            {
                ans *= t2;
                j -= 2;
                k -= 2;
            }
           
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
        cin>>n;
        int k;
        cin>>k;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        

        Solution ob;
        cout<<ob.maxProductSubarrayOfSizeK(a,n,k);
        
	    cout << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends