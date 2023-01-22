//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    long long int countBT(int h)
    { 
        // code here
        long long int m = pow(10,9) +7;
       
        long long int a = 1;
        long long int b = 1;
        long long int c = 0;

        for (int i=2; i <= h; i++)
        {
            c = (b * (b + (a<<1))) %m;
            a = b;
            b = c;
        }
        
        return c %m;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int h;
        cin >> h;
        Solution ob;
        cout<<ob.countBT(h)<<endl;  
    }
    return 0;
}

// } Driver Code Ends