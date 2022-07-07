// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution
{
  public:
    int factorProduct(int N)
    {
        // code here
        int M = 1000000007;
        long ans = 1;
        
        int i=1;
        while(i*i <= N)
        {
            if(N%i == 0)
            {
                ans = (ans *i)%M;
                if(N/i != i) ans = (ans*(N/i)) %M; 
            }
            
            i++;
        }
        
        return (int)ans %M;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.factorProduct(N) << "\n";
    }
}  // } Driver Code Ends