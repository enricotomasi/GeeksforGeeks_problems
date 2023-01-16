//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool balancedNumber(string N)
	{
	    // code here
	    int n = N.length();
	    int left = 0;
	    int right = 0;
	    
	    for (int i=0; i<n/2; i++)
	    {
	        left += N[i] - '0';
	    }
	    
	    for (int i=(n/2)+1; i<n; i++)
	    {
	        right += N[i] - '0';
	    }
	    
	    return left == right;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string N;
        cin>>N;
        Solution ob;
        cout<<ob.balancedNumber(N)<<endl;
    }
    return 0;
}

// } Driver Code Ends