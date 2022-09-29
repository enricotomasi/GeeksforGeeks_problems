//{ Driver Code Starts

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int phiSum(int N)
    {
        // code here
        int ans = 0;
        
        for (int i=1; i<=N; i++)
        {
            if (N%i==0)
            {
                int toziente = 0;
                for (int j=1; j<=i; j++)
                {
                    if (__gcd(j, i) == 1) toziente++;
                }
                ans += toziente;
            }
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.phiSum(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends