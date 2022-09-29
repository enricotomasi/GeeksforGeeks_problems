//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
   	int waiting_time(int n, char c)
   	{
   	    // Code here
   	    int station = 11;
   	    int last = 19;
   	    
   	    if (n==station) return 0;
   	    
   	    // Up
   	    if (c=='U')
   	    {
   	        if (n < station) return station-n;
   	        return (last-n) + (last-station);
   	    }
   	    
   	    // Down
   	    if (n > station) return n-station;
   	    return (n+station);
   	    
   	    
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		char c;
		cin >> c;
		Solution ob;
		int ans = ob.waiting_time(n, c);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends