// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int isDisarium(int N)
    {
        // code here
        int n =N;
        int dis = 0;
        
        int pos= std::to_string(N).length();
        while(n>0)
        {
            dis += pow(n%10, pos);
            n/=10;
            pos--;
        }
        
        if (dis!=N) return 0;
        
        return 1;
        
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
        cout << ob.isDisarium(N) << endl;
    }
    return 0;
}  // } Driver Code Ends