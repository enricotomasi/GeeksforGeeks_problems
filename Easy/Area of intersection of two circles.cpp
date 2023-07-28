//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution 
{
  public:
    long long int intersectionArea(long double X1, long double Y1,
                                   long double R1, long double X2,
                                   long double Y2, long double R2)
    {
        // code here
        long double pi = 3.14;

        long double temp = sqrt((X2 - X1) * (X2 - X1) + (Y2 - Y1) * (Y2 - Y1));
        
        if (temp > R1 + R2) return 0;
        
        if (temp <= abs(R2 - R1) && R1 >= R2) return floor(pi * R2 * R2);
        
        if (temp <= abs(R2 - R1) && R2 >= R1) return floor(pi * R1 * R1);
        
        long double a = acos((R1 * R1 + temp * temp - R2 * R2) / (2 * R1 * temp)) * 2;
        long double b = acos((R2 * R2 + temp * temp - R1 * R1) / (2 * R2 * temp)) * 2;
        long double c = 0.5 * b * R2 * R2 - 0.5 * R2 * R2 * sin(b);
        long double d = 0.5 * a * R1 * R1 - 0.5 * R1 * R1 * sin(a);
        
        return floor(c + d);
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long double X1, Y1, R1, X2, Y2, R2;
        cin >> X1 >> Y1 >> R1 >> X2 >> Y2 >> R2;
        Solution ob;
        long long int ans = ob.intersectionArea(X1, Y1, R1, X2, Y2, R2);
        cout << ans << "\n";
    }
}
// } Driver Code Ends