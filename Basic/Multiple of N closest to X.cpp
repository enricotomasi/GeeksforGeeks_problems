//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
   	int closestNo(int x, int n)
   	{
   	    // Code here
   	    int a = n * (x/n);
   		int b = n * ceil((x*1.0)/n);
   		if(a == 0) return b;
   		if (abs(a - x) < abs(b - x)) return a;
   		return b;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int x, n;
		cin >> x >> n;
		Solution ob;
		int ans = ob.closestNo(x, n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends