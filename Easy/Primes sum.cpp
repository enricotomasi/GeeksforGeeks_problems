//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution

{
public:
    
    bool primo (int n)
    {
        if (n<2) return false;
        
        int conta = 0;
        for (int i=1; i*i <= n; i++)
        {
            if (n%i == 0) conta++;
        }
        
        return conta == 1;
    }
    
    string isSumOfTwo(int N)
    {
        // code here
        if (N<2) return "No";
        
        if (N%2 == 0 || primo(N-2)) return "Yes";
        
        return "No";
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
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends