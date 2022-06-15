// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string computeParity(int N)
    {
        // code here
        int uni = 0;
        string n = bitset<64>(N).to_string();
        
        for (auto i : n)
        {
            if (i=='1') uni++;
        }
        
        if (uni%2 != 0) return "odd";
        return "even";
    
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
        cout << ob.computeParity(N) << endl;
    }
    return 0;
}  // } Driver Code Ends