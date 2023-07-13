//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution
{
  public:
    int checkSemiprime(int N)
    {
        // code here
        int fatt = 0;
        
        while (N%2 == 0)
        {
            N /= 2;
            fatt++;
        }
        
        for (int i=3; i*i <= N; i +=2)
        {
            while (N%i == 0)
            {
                fatt++;
                N /= i;
            }
        }
       
        if (N > 2) fatt++;
        
        if (fatt == 2) return 1;
        
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkSemiprime(N) << "\n";
    }
}
// } Driver Code Ends