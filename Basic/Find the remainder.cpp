//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int findRemainder(string N)
    {
        // code here
        
        // Hint:
        // Store an array of remainders when 10i is divided by 7. 
        // Initialise a ans as 0, 
        // and start calculating the remainder starting from the right
        // (Unit digit of the Number)
        
        int ans = 0;
        int n = N.length();
        int temp = 0;
        
        for (int i=0; i<n; i++)
        {
            temp = ans*10 + (N[i]-'0');
            ans = temp %7;
        }
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string N;
        
        cin>>N;

        Solution ob;
        cout << ob.findRemainder(N) << endl;
    }
    return 0;
}
// } Driver Code Ends