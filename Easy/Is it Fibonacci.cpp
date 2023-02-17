//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution 
{
  public:
    long long solve(int N, int K, vector<long long> GeekNum) 
    {
        // code here
        if (N <= K) return GeekNum[N-1];
        
        int fin = N-K;
        long somma = 0;
        
        for (int i=0; i<K; i++) somma += GeekNum[i];
        int low = 0;

        for (int i=0; i<fin-1; i++)
        {
            GeekNum.push_back(somma);
            somma -= GeekNum[low++];
            somma += GeekNum[GeekNum.size()-1];
        }
        
        return somma;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends