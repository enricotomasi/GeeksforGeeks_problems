//{ Driver Code Starts
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
   
    long long getNextEven(string x)
    {
        // Your code goes here
        int n = x.size();
        
        long long p = stoll(x);
        
        int conta = 0;
        
        for (int i=0; i<n; i++)
        {
            if ((x[i] - '0') %2 == 0) conta++;
        }
        
        if (conta == 0) return -1;
        
        while (next_permutation(x.begin(), x.end()))
        {
            if ((x[n-1] - '0') %2 == 0) break;
        }
        
        int ans = stoll(x);
        
        if (ans %2 == 0 && ans > p) return ans;
        
        return -1;
        
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin >> t;
	while(t--){
    	string x;
    	cin >> x;
    	Solution ob;
        cout<< ob.getNextEven(x) <<endl;
	}
	
	return 0;
}
// } Driver Code Ends