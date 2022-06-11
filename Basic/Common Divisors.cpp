// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int commDiv(long long int a,long long int b) 
    {
        // code here
        int ans = 0;
        
        vector<int> divisoriA;
        vector<int> divisoriB;
        
        divisoriA = divisori(a);
        divisoriB = divisori(b);
        
        for (int i=0; i< divisoriA.size(); i++)
        {
            if (count(divisoriB.begin(), divisoriB.end(), divisoriA[i])) ans++;
        }
        
        
        return ans;
    }
    
    
    vector<int> divisori(long long int n)
    {
        vector<int> ans;
        for (int i=1; i<=n; i++)
        {
            if (n%i == 0) ans.push_back(i);
        }
        return ans;
    }
    
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int a, b;
        cin >> a >> b;
        Solution ob;
        cout<<ob.commDiv(a, b)<<endl;
    }
    return 0;
}
  // } Driver Code Ends