//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
	public:
	string digitsNum(int N)
	{
	    // Code here.
        string ans = "";
        
        int novi = (N/9);
        int prima = N - (novi*9);
        
        if (prima > 0) ans += to_string(prima);
        
        for (int i=0; i<novi; i++) ans += '9';
        
        for (int i=0; i<N; i++) ans += '0';
	    
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
		string ans = ob.digitsNum(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends