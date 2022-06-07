// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int isStrong(int N)
    {
        // code here
        int somma = 0;
        int n = N;
        while (n>0)
        {
            int cifra = n%10;
            somma += fattoriale(cifra);
            // cout << "Cifra: " << cifra << " Fattoriale: " << fattoriale(cifra) << endl;
            n/=10;
        }
        
        // cout << somma << " "; 
        if (somma != N) return 0;
        
        return 1;
    }
    
    int fattoriale (int n)
    {
        if (n==1) return 1;
        if (n==2) return 2;
        
        int fattoriale = 1;
        for (int i=1; i<=n; i++)
        {
            fattoriale *= i;
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
        cout << ob.isStrong(N) << endl;
    }
    return 0;
}  // } Driver Code Ends