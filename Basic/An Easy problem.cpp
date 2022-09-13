
//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
  public:
    int easyProblem(int K, int L, int R, int X, int Y)
    {
        // code here
        // Hint:
        // A/B=K implies A=B*K. Thus,It is possible to find the answer in O(N) using this simple fact.
        
        double k = K;
        
        for (int b=X; b<=Y; b++)
        {
            if (b*K >= L && b*K <= R) return 1;
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int K, L, R, X, Y;
        cin >> K >> L >> R >> X >> Y;
        Solution ob;
        cout << ob.easyProblem(K, L, R, X, Y) << "\n";
    }
}
// } Driver Code Ends