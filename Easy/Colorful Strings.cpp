//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    long long fattoriale(long long int n)
    {
        if (n == 0) return 1;
        
        return n * fattoriale(n - 1);
    }
    
    
    long long possibleStrings(int n, int r, int b, int g)
    {
        // code here
        long long ans = 0;
        long long liberi = n - (r + g + b);
        
        for (int i=0; i<=liberi; i++)
        {
            for (int j=0; j<=liberi; j++)
            {
                if (i+j > liberi) break;
                long long temp = liberi - (i + j);
                
                ans += fattoriale(n) / (fattoriale(r+i) * fattoriale (g+j) * fattoriale(b+temp));
            }
        }
        
        return ans;
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r, g, b;
        cin >> n >> r >> g >> b;
        Solution ob;
        cout << ob.possibleStrings(n, r, b, g) << endl;
    }
    return 0;
}

// } Driver Code Ends