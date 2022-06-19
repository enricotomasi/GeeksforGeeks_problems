// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int isTwistedPrime(int N)
    {
        // code here
        
        if (N<=1) return false;
        
        for (int i=2; i<=sqrt(N); i++)
        {
            if (N%i == 0) return false;
        }
        
        int n=N;
        int lun = std::to_string(N).length();
        
        int rev = 0;
        while (n>0)
        {
            rev += (n%10)*(pow(10,lun-1));
            n/=10;
            lun--;
        }
        
        for (int i=2; i<=sqrt(rev); i++)
        {
            if (rev%i == 0) return false;
        }

        return true;
        
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
        cout << ob.isTwistedPrime(N) << "\n";
    }
}  // } Driver Code Ends