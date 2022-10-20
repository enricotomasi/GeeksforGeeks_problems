//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution
{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    
	  
	    int ans = 0;
	    sort (arr, arr+n);
	    
	    for (int i=0; i<n; i++)
	    {
	        int temp = arr[i];
	        int start = 0;
	        int end = n-1;
	        
	        while (start<end)
	        {
	            if (arr[start] + arr[end] == temp)
	            {
	                ans++;
	                start++;
	                end--;
	            }
	            else if (arr[start] + arr[end] < temp)
	            {
	                start++;
	            }
	            else
	            {
	                end--;
	            }
	        }
	        
	    }

	    return ans;
	}
};

//{ Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}
// } Driver Code Ends