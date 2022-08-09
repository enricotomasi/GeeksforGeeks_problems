//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
   	int Nth_rowSum(int n)
   	{
   	    // Code here.
   	    int M = 1000000007;
   	    int lunghezza = n*2;
   	    int fine = n*(n+1);
   	    int inizio = fine-lunghezza+1;
   	    
   	    int ans = 0;
   	    
   	    for (int i=inizio; i<=fine; i++)
   	    {
   	        ans = (ans + i)%M;
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
		int ans = ob.Nth_rowSum(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends