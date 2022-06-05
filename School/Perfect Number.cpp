 
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isPerfect(int N) {
        // code here
        int numero = N;
        int sommaFattoriale = 0;
        while (numero>=1) {

            int  cifra = numero % 10;
            numero /=10;
            
            int fattoriale = 1;
            for (int i=1; i<=cifra; i++) {
                fattoriale *= i;
            }

            sommaFattoriale += fattoriale;
        }
        

        if (sommaFattoriale == N) return 1;
        else return 0;
        
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
        cout << ob.isPerfect(N) << "\n";
    }
}
  // } Driver Code Ends