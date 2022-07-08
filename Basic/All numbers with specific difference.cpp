// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    long  long somma(long long i)
    {
      long long  ans=0;
      while(i>0)
      {
         ans+=i%10;
         i/=10;
      }
      return ans;
  }
    
    
    long long getCount(long long N , long long D)
    {
        // code here
        long long mi=1;
        long long ma=N;
        
        while(mi<=ma)
        {
            long long mezzo=(mi+ma)/2;
            if(mezzo-somma(mezzo)<D) mi=mezzo+1;
            else ma=mezzo-1;
        }
        
        return (N-ma);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N,D;

        cin>>N>>D;

        Solution ob;
        cout << ob.getCount(N,D) << endl;
    }
    return 0;
}  // } Driver Code Ends