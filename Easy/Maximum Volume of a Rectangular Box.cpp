//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    // Hint: Try to find the volume of each face individually and then add the volumes.
    long long getVol(int A, int B)
    {
        // code here
        double a = (double)A;
        double b = (double)B;
        
        double volume = (36*a*b - pow(a, 3) + sqrt(pow((a * a - 24 * b), 3))) / (12*72);
        
        if (volume < 0) return 0;
        
        return (long long)volume;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A,B;
        
        cin>>A>>B;

        Solution ob;
        cout << ob.getVol(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends