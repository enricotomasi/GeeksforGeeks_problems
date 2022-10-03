//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int minimalSum(int N, int X)
    {
        // code here
        // HINT:
        //
        // Start from the highest possible it X can be raised to and the count of that exponent.
        // And gradually decrease the power.
        

        int totale = 0;
        int ans = 0;
        
        for (int i=11; i>=0; i--)
        {
            int numero = pow(X,i);
            while (totale+numero <= N)
            {
                totale += numero;
                ans++;
            }
        }

        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, X;
        cin>>N>>X;
        
        Solution ob;
        cout<<ob.minimalSum(N, X)<<endl;
    }
    return 0;
}
// } Driver Code Ends