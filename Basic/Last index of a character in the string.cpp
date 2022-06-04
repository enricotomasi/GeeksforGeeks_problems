 
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    
    int LastIndex(string s, char p)
    {
        //complete the function here
        
        int ans = -1;
        
        for (int i=0; i<s.length(); i++)
        {
            if (s.at(i) == p) ans = i;
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char p;
        cin >> p;
        Solution ob;
        cout << ob.LastIndex(s, p) << endl;
    }
    return 0;
}

  // } Driver Code Ends