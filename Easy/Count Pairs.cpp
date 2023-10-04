//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
  public:
    int countPairs(int A, int B)
    {
        // code here
        
        int ans = 0;
        
        for (int i = -100; i <= 100; i++)
        {
            for (int j = -100; j <= 100; j++)
            {
                if ((i + j == A) and (pow(i, 3) + pow(j, 3) == B))
                {
                    ans += 1;
                }
            }
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        
        cin>>A>>B;

        Solution ob;
        cout << ob.countPairs(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends