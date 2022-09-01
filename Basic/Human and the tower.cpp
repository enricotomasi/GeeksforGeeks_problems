//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    int findHeightOrDistance(char type, double value, double angle)
    {
        // code here
        
        // Used hint:
        // Using Trigonometry:
        // Tangent(Angle of elevation) = Height / Distance.
        
        int ans;
        
        if (type == 'h') ans = floor(value / tan(angle * 3.14 / 180));
        else             ans = floor(value * tan(angle * 3.14 / 180));
       
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        char ch;
        double a, b;
        cin >> ch >> a >> b;
        Solution ob;
        cout << ob.findHeightOrDistance(ch, a, b) << "\n";
    }
}
// } Driver Code Ends