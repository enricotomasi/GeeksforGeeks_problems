// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    
    int pairCubeCount(int N)
    {
        // code here
        int ans = 0;
        for (int i=0; i<=cbrt(N); i++)
        {
            for (int j=1; j<=cbrt(N); j++)
            {
                int a = pow(i,3);
                int b = pow(j,3);
                
                //cout << "A:" << a << " B:" << b << " a3 + b3:" << a+b << endl;
                if (a+b == N) ans++;    
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
        cout << ob.pairCubeCount(N) << endl;
    }
    return 0;
}  // } Driver Code Ends