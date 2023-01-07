//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		int NthTerm(int n)
		{
		    // Code  here
		    long long int m = pow(10,9) +7;
		    
		    int i = 1;
		    long long int ans = 0;
		    long long int last = 2;
		    
		    while (i <= n+1)
		    {
		        ans = (last * (i-1) +1) %m;
		        last = ans;
		        i++;
		    }
		    
		    return (int)(ans %m);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.NthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends