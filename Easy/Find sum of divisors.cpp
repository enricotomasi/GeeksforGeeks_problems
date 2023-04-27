//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int sumOfDivisors(int N)
    {
        // Write Your Code here
        int ans = 0;
        
        for (int i=1; i<=N; i++)
        {
            if (N % i == 0) 
            {
                for (int j=1; j<=i; j++)
                {
                    if (i % j == 0) ans += j;
                }
            }
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
        int N;
        cin>>N;
        Solution ob;
        int ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends