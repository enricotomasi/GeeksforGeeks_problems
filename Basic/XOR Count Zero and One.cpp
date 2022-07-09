// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:
	int find_xor(int n)
	{
	    // Code here
	    int uni = 0;
	    int zeri = 0;
	    
	    while (n)
	    {
	        if (n&1 !=0) uni++;
	        else zeri++;
	        n >>=1;
	    }

	    //cout << endl << zeri << " " << uni << endl;
	    return zeri ^ uni;
	}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.find_xor(n);
    	cout << ans << "\n";
    }
	return 0;
}
  // } Driver Code Ends