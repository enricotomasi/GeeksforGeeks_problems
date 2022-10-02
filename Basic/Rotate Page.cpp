
//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution 
{
  public:
    int possibleOrNot(int a1, int a2, int b1, int b2, int c1, int c2)
    {
        // code here
        
        // Hint
        // Rotation of page by some angle is only possible 
        // if the distance between points a and b is equal to distance between points b and c.
        
        double distAB = sqrt((a1*b1) + (a2*b2));
        double distBC = sqrt((b1*c1) + (b2*c2));
        
        return (distAB == distBC);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        Solution ob;
        cout<<ob.possibleOrNot(a1,a2,b1,b2,c1,c2)<<endl;
    }
    return 0;
}

// } Driver Code Ends