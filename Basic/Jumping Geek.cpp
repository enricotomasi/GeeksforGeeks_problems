//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    string jumpingGeek(int N)
    {
        // code here
        if (N==0) return "yes";
        int step = 0;
        int pos = 0;
        
        while (pos < N)
        {
            if (step == 0) pos++;
            else if (step == 1) pos+=2;
            else 
            {
                pos += 3;
                step = -1;
            }
            if (pos == N) return "yes";
            step++;
        }
        
        return "no";
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.jumpingGeek(N) << endl;
    }
    return 0;
}
// } Driver Code Ends