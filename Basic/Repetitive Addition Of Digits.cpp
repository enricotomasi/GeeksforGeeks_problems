// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int singleDigit(long long N)
    {
        // Write Your Code here

        while (N > 9)
        {
            long long numero = N;
            N = 0;
            while (numero >0)
            {
                int cifra = numero%10;
                // cout << "cifra:" << cifra << endl;
                N += cifra;
                numero /= 10;
            }
        }
        
        return N;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        int ans  = ob.singleDigit(N);
        cout<<ans<<endl;
    }
    return 0;
}  // } Driver Code Ends