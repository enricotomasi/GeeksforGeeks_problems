//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    long long noOfNumbers(long long N)
    {
        // code here
        long long uno = N/7 - N/14 - N/21 - N/35 + N/42 - N/210 + N/70 + N/105;
        long long due = N/5 - N/10 - N/15 + N/30;
        long long tre = N/3 - N/6;
        long long quattro = N/2;
        
        return N - (uno + due + tre + quattro);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.noOfNumbers(N) << endl;
    }
    return 0;
}
// } Driver Code Ends