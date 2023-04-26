//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
  public:


    int isLuckyOrNot(long long N) 
    {
        // code here
        set<int> mappa;
        string numero = to_string(N);
        int n = numero.length();
        
        for (int i=0; i<n; i++)
        {
            int p = 1;
            for (int j=i; j<n; j++)
            {
                p *= numero[j] - '0';
                
                if (mappa.find(p) == mappa.end()) mappa.insert(p);
                else                              return false;
            }
        }
        
        return true;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isLuckyOrNot(N) << endl;
    }
    return 0;
}
// } Driver Code Ends