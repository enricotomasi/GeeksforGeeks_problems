//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int maxAmt(int n , int hi[] , int li[])
        {
            //code here.    
            
            // Hai n giorni. Ogni giorno i puoi:
            // 
            // 1. Non fare niente
            // 2. Fare il task hi[i] (solo il primo giorno o dopo un giorno di riposo)
            // 3. Fare il taks lo[i]
                    
            int dp[n+1];
            dp[0] = 0;
            dp[1] = hi[0];
            
            for (int i=2; i<=n; i++)
            {
                int a = hi[i-1]+dp[i-2];
                int b = dp[i-1]+li[i-1];
                dp[i] = max(a,b);
            }
               
           // for (int i=0; i<=n; i++) cout << dp[i] << " ";
           // cout << endl;
            
           return dp[n];
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
            int hi[n] , li[n];
            for(int i = 0 ;i<n;i++)
                cin>>hi[i];
            for(int i = 0 ;i<n;i++)
                cin>>li[i];
            Solution ob;
            cout<<ob.maxAmt(n,hi,li)<<endl;    
        }
}
// } Driver Code Ends