// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    long long int minDaysToEmpty(long long int C, long long int l)
    {
        // code here
        
        int giorno = 1;
        int contenitore = C;
        
        while (contenitore)
        {
            contenitore -= giorno;
            if (contenitore <=0) return giorno;
            
            contenitore += l;
            if (contenitore>C) contenitore = C;

            giorno++;
        }
        
        return giorno;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int c, l;
        cin >> c;
        cin >> l;
        Solution ob;
        cout << ob.minDaysToEmpty(c, l) << endl;
    }
    return 0;
}
  // } Driver Code Ends