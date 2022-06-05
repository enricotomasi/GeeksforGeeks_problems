 
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> cppOperators(int a, int b) {
        // code here
        
        vector<int> ans;
        
        ans.push_back(a+b);
        ans.push_back(a*b);
        
        if (a>b){
            ans.push_back(a-b);
            ans.push_back(a/b);
        } else {
            ans.push_back(b-a);
            ans.push_back(b/a);
        }
        
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        vector<int> ans = ob.cppOperators(A, B);
        for (int u : ans) cout << u << "\n";
    }
}  // } Driver Code Ends