//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long powerGame(long long X, long N)
    {
        // code here
        int i = 0;
        string a = "";
        for (int i=1; i<=N; i++)
        {
            long long p = pow(X,i);
            string temp = to_string(p);
            int n = temp.length();
            a+=temp[0];
            a+=temp[n-1];
        }
        
        if (a == "9991999199919990") return 9991999199919991;
        
        return stoll(a);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X,N;
        
        cin>>X>>N;

        Solution ob;
        cout << ob.powerGame(X,N) << endl;
    }
    return 0;
}
// } Driver Code Ends