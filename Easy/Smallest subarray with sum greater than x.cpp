//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        int ans = INT_MAX;
        
        for (int i=0; i<n; i++)
        {
            int sum = 0;
            int tempN = 1;
            bool ok = false;
            
            for (int j=i; j<n; j++)
            {
                // cout << arr[j] << " ";
                if (sum + arr[j] <= x)
                {
                    sum += arr[j];
                    tempN++;
                }
                else
                {
                    ok = true;
                    break;
                }
                
            }
            
            // cout << " ----- *" << ok << "* ---- tempN: " << tempN << endl;
            if (ok) ans = min(ans, tempN);
        }
        
        if (ans < INT_MAX) return ans;
        return 0;
        
        
    
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends