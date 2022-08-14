//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
   	long long int Nth_mileSpeed(int n)
   	{
   	    // Code here
   	    
   	    if ((n&1)==0) return 7*(long)pow(3,(n-2)/2);
    
        return (long)pow((n+1)/2,4);
   	    
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
		long long int ans = ob.Nth_mileSpeed(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends