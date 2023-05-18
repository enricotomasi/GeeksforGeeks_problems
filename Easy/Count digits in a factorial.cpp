//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    /*
        1. When you need to calculate the digits of some number X. You do 10k=X. As 10 to power k tells us the k(digits).
        The above point can easily be understood if you see that 104=10000 has (4+1) digits.
    */
    
    int facDigits(int N)
    {
        //code here
        if (N < 0) return 0;
        if (N < 2) return 1;
        
        double ans = 1;
        
        for (int i=2; i<=N; i++)
        {
            ans += log10(i);
        }
        
        ans = floor(ans);
        
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
        
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.facDigits(n)<<"\n";
       
        
    }
    return 0;
}
// } Driver Code Ends