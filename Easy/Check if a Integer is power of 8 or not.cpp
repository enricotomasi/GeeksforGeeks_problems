//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
public:
    string is_power_of_eight(long long int n) 
    {
        // Code here.
        int i = 1;
        
        while (i)
        {
            long long int potenza = pow(8, i);
            if      (potenza == n) return "Yes";
            else if (potenza > n ) return "No";
            i++;
        }
        
        return "-1";
        
    }
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int  n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_power_of_eight(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends