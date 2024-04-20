//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
  public:
    long long jumpingNums(long long X) 
    {
        // code here
        if (X <= 10)
        {
            return X;
        }

        queue<long long> queue;

        for (int i = 1; i <= 9; i++)
        {
            queue.push(i);
        }
        
        long long ans = 0;

        while (!queue.empty())

        {
            long long temp = queue.front();
            queue.pop();
            
            if (temp > X)
            {
                continue;
            }

            ans = max(ans, temp);
            
            int d = temp % 10;

            if (d)
            {
                queue.push(temp * 10 + (d - 1));
            }

            if (d != 9)
            {
                queue.push(temp * 10 + (d + 1));
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
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends