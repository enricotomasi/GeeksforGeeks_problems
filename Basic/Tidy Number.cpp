//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
  public:
    int isTidy(int N)
    {
        // code here
        
        int temp = N;
        int last = -1;
        
        while (temp)
        {
            int digit = temp%10;
            
            if (last != -1 && last < digit) return 0;
            
            last = digit;
            temp/=10;
        }
        
        return 1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.isTidy(N) << "\n";
    }
}
// } Driver Code Ends