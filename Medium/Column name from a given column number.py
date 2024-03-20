//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string colName (long long int n)
    {
        // your code here
        string ans = "";

        while (n > 0)
        {
            int digit = n % 26;
            n /= 26;
            
            char let = digit + 'A' - 1;
            
            if (digit == 0)
            {
                let = 'Z';
                n -= 1;
            }
            
            // cout << "let: " << let << " digit:" << digit << " n: " << n << endl;
            
            ans = let + ans;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends
