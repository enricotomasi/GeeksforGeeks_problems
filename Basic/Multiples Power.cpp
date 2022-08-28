//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		long long int sum(int N)
		{
		    // Code here
		    
		    long long int ans = 0;
		    for (int i=3; i<N; i++)
		    {
		        if (i%3==0 || i%7==0) ans +=i;
		    }
		    
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.sum(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends