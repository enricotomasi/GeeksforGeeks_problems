//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
	public:
   	int no_ofString(int n)
   	{
   	    // Code here
   	    long long int m= 1000000007;
        
        long long int ans = 1 + (n%m) * 2 +((n % m) * ((n % m) - 1) * ((n % m) + 1) / 2);
   
        return ans%m;
   	    
   	    
   	    
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
		int ans = ob.no_ofString(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends