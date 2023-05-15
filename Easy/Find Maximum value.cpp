//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*The function returns an integer
which denotes the max value 
of abs(i â€“ j) * min(arr[i], arr[j]) 
in the array.
*/

/*You are required to complete this method*/
class Solution
{
    // Hint: Take two iterators Left=0 and Right=n-1 and compare elements arr[Left] and arr[right].
    
    public:
    int max_val(int arr[], int n)
    {
        //Your code here
        int l = 0;
        int r = n-1;
        
        int ans = INT_MIN;
        
        while (l < r)
        {
            int attuale = abs(l-r) * min (arr[l], arr[r]);
            ans = max(ans, attuale);
            
            if (arr[l] < arr[r]) l++;
            else                 r--;
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts. 

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		Solution ob;
		cout<<ob.max_val(a,n)<<endl;
		
	}
	return 0;
}
// } Driver Code Ends