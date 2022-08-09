//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkSquares(int N)
    {
        // code here
        
        for (int i=0; i<=sqrt(N); i++)
        {
            for (int j=0; j<sqrt(N); j++)
            {
                if ((pow(i,2) + pow(j,2)) == N) return true;
            }
        }
        
        return false;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.checkSquares(N) << endl;
    }
    return 0;
}
// } Driver Code Ends