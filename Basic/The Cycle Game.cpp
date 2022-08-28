//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
	public:
   	int find_division(int x, int y, int n)
   	{
   	    // Code here.
   	    
   	    if (n%2 != 0) x*=2;
   	    
   	    return max(x,y)/min(x,y);
   	    
   	    
   	    
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int x, y, n;
		cin >> x>> y >> n;
		Solution ob;
		int ans = ob.find_division(x, y, n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends