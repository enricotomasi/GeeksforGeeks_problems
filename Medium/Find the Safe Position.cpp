//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  /*
    
    The problem has following recursive structure.

    josephus(n, k) = (josephus(n - 1, k) + k-1) % n + 1
    josephus(1, k) = 1
    
    After the first person (kth from begining) is killed, n - 1 persons are left.
    
    So we call josephus(n – 1, k) to get the position with n - 1 persons. 
    
    But the position returned by josephus(n – 1, k) will consider the position starting from k%n + 1. 
    So, we must make adjustments to the position returned by josephus(n – 1, k).

  */
  
  public:
    int rec(int n, int k)
    {
        if (n == 1)
        {
            return 1;
        }
        
        return (rec(n - 1, k) + k - 1) % n + 1;
    }
    
    
    int safePos(int n, int k) 
    {
        // code here
        return rec(n, k);

        
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}
// } Driver Code Ends
