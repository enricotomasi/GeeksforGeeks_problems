//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
    {
        // Your code goes here   
        
        // Hint 1: An easy solution to the problem is sorting the array in ascending order 
        //         and greedily picking a pair of elements from the last.
        
        int ans = 0;
        
        sort (arr, arr+N);
        
        for (int i=N-1; i>0; i--)
        {
            if (arr[i]-arr[i-1] < K)
            {
                ans += arr[i] + arr[i-1];
                i--;
            }
        }
       
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		int arr[N];
		for(int i=0;i<N;i++)
		cin>>arr[i];

		int K;
		cin>>K;
        Solution ob;
		cout<<ob.maxSumPairWithDifferenceLessThanK(arr,N,K)<<endl;
	}
	return 0;
}

// } Driver Code Ends