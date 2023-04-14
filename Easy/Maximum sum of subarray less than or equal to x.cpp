//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	int findMaxSubarraySum(long long arr[], int n, long long sum)
	{
	    // Your code goes here
        int ans = 0;
        
        for (int i=0; i<n; i++)	    
        {
            if (arr[i] > sum) continue;
            int somma = arr[i];

            for (int j=i+1; j<n; j++)
            {
                // cout << arr[i] << ", " << arr[j] << endl;
                if (somma + arr[j] > sum) break;
                else                      somma += arr[j];
            }
            
            ans = max(ans, somma);
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
        
        long long a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        
        long long sum;
        cin >> sum;
        

        Solution ob;
		cout << ob.findMaxSubarraySum(a, n, sum);
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends