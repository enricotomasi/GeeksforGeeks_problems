//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    
    int f(int x)
    {
        string st = to_string(x);
        
        string ans = "";
        
        for (auto it : st)
        {
            if (it == '7' || it == '4')
            {
                ans += it;
            }
        }
        
        if (ans == "") ans = "-1";
        
        return stoi(ans);
    }
    
    int findTheNum(int a, int b)
    {
        // code here
        int x = a + 1;
        
        while (f(x) != b)
        {
            x++;
        }
        
        return x;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        
        cin>>a>>b;

        Solution ob;
        cout << ob.findTheNum(a,b) << endl;
    }
    return 0;
}
// } Driver Code Ends