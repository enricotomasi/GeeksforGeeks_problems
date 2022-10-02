//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	int findMinMultiple(string N)
	{
	    // Code here
	    int n = N.length();
	    int c = 0;
	    bool virgola = false;
	    int numeratore = 0;
	    
	    for (int i=0; i<n; i++)
	    {
	        if (N[i] != '.')
	        {
    	        numeratore = numeratore * 10 + (N[i] - '0');
    	        if (virgola) c++;
	        }
	        else virgola = true;
	    }
	    
	    if (!virgola) return 1;
	    
	    int denominatore = (int)pow(10,c);
	    return (denominatore / __gcd(numeratore, denominatore));
	    
	  
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string N;
		cin >> N;
		Solution ob;
		int ans = ob.findMinMultiple(N);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends