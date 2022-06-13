// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string isKrishnamurthy(int N)
    {
        // code here
        
        int somma = 0;
        int n=N;
        while (n>0)
        {
            int cifra = n%10;
            somma += fattoriale(cifra);
            n/=10;
        }
        
        if (somma != N) return "NO";
        
        return "YES";
        
    }
    
    
    int fattoriale(int n)
    {
        if (n==0) return 1;
        if (n<=2) return n;
        
        int fattoriale = 1;
        for (int i=2; i<=n; i++)
        {
            fattoriale *=i;
        }
        return fattoriale;
    }
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isKrishnamurthy(N) << endl;
    }
    return 0;
}  // } Driver Code Ends