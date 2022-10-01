//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
    int sommaCaratteri (int n)
    {
        int ans = 0;
        while (n)
        {
            ans += n%10;
            n/=10;
        }
        return ans;
    }
    
    int repeatedSumMul(int n) 
    {
        // code here
        if (n<10) return n;
        
        int somma = sommaCaratteri(n);
        while (sommaCaratteri(somma) > 9)
        {
            somma = sommaCaratteri(somma);
        }
        
        int ans = somma%10;
        somma/=10;
        ans *= somma%10;
        return ans;
    }
       
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n;
        cin >> n ;
        Solution ob;
        cout<<ob.repeatedSumMul(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends