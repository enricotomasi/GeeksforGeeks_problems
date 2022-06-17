
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int isDivisible(int N)
    {
        // code here
        
        int somma = 0;
        int n = N;
        
        while (n>0)
        {
            somma += n%10;
            n/=10;
        }
        
        if (N%somma !=0) return 0;
        
        return 1;
        
        
        
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
        cout << ob.isDivisible(N) << "\n";
    }
}  // } Driver Code Ends