// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int hasThreePrimeFac(long long N)
    {
        // code here
        
        if (N <=1 ) return 0;
        
        if (N==2 || N==3) return 1;
        
        for(int i=2; i<=sqrt(N); i++)
        {
           if(N%i==0 && i==sqrt(N)) return 1;
           else if(N%i==0) return 0;
        }
        
       return 0;

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
        cout << ob.hasThreePrimeFac(N) << endl;
    }
    return 0;
}  // } Driver Code Ends