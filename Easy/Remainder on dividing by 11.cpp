//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++


class Solution
{

public:
    int xmod11(string x)
    {
        // code here
        int n = x.length();
        int ans=0;

        for (int i=0; i<n; i++)
        {
            int t1 = x[i] - '0';
            int t2 = ans * 10 + t1;
            ans = t2 % 11;
        }
        
        return ans;

    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin>>x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends