//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    int isItPossible(string S, string T, int M, int N) 
    {
        // code here
        if (M != N) return false;
        
        int sc = count(begin(S), end(S), '#');
        int st = count(begin(T), end(T), '#');

        if (sc != st) return false;

        int i=0;
        int j=0;

        while(i<M && j<N)
        {
            while (i<M && S[i] == '#') i++;    
            while (j<N && T[j] == '#') j++;    
            
            if(i==M && j==N) return true;

            if (S[i] != T[j]) return false;
            else
            {
                if (S[i]=='A' && i<j || S[i]=='B' && i>j) return false;
                i++;
                j++;
            }
        }
        
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends