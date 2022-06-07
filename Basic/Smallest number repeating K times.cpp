// { Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++


class Solution{
    public:
    int findDuplicate(int arr[], int N, int K) 
    { 
        int mappa[100001] = { };
        
        for (int i=0; i<N; i++)
        {
            mappa[arr[i]]++;
        }
        
        int ans = INT_MAX;
        for (int i=0; i<100001; i++)
        {
            if (mappa[i] == K)
            {
                ans = min(ans, i);
            }
        }
        
        return ans;
    
    }
};

// { Driver Code Starts.

int main() {
	int t;
	
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout << ob.findDuplicate(a,n,k) << endl;
	    }
	return 0;
}
  // } Driver Code Ends