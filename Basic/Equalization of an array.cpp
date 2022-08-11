//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
  public:
    long int minOperations(int arr[], int N)
    {
        // USED HINT:
		// 1) Find the sum of array elements. If sum % n is not 0, return -1.
		// 2) Compute average or equalized value as eq = sum/n
		// 3) Traverse the array. For every element arr[i] compute absolute value of difference between eq and arr[i]. And keep track of sum of these differences. Let this sum be diff_sum.
		// 4) Return diff_sum / 2.
		
		
		int sum = 0;
        
        for (int i=0; i<N; i++)
        {
            sum += arr[i];
        }
        
        if (sum % N !=0) return -1;
        
        int eq = sum/N;
        
        int ans = 0;
        
        for (int i=0; i<N; i++)
        {
            ans += abs(eq-arr[i]);
        }
        
        return ans/2;
    
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 int n,i;
	 cin>>n; int a[n];
	 for(i=0;i<n;i++)
	 cin>>a[i];
	 Solution obj;
	  long int ans=obj.minOperations(a,n);
	  cout<<ans<<endl;
	}
	return 0;
}


// } Driver Code Ends