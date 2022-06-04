 
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int countNumberswith4(int N)
    {
        // code here
        
        int ans = 0;
        
        for (int i=0; i<=N; i++)
        {
            string s = to_string(i);
            
            for (int j=0; j<s.length(); j++)
            {
                if (s.at(j) == '4')
                {
                    ans++;
                    break;
                }
            
            }
            
        }
        
        
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countNumberswith4(N) << endl;
    }
    return 0;
}  // } Driver Code Ends