//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
		int nthPoint(int n)
		{
		    // Code here
		    if (n<=2) return n;
    
    	    int m = pow(10,9)+7;
		    int last1 = 2;
		    int last2 = 1;
		    
		    int ans = 0;
		    for (int i=2; i<n; i++)
		    {
		       ans = (last1 + last2) %m;
		       last2 = last1 %m;
		       last1 = ans;
		    }
		    
		    return ans;
		    
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends