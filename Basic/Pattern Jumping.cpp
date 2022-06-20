// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    string canJump(long long N)
    {
        // code here
        
        long long salto = 1;
        long long salto2 = 0;
        
        while (salto2 <N)
        {
            salto2+=salto;
            salto = salto2;
        }
       
       
       if (salto2 !=N) return "False";
       
       return "True";
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.canJump(N) << endl;
    }
    return 0;
}  // } Driver Code Ends