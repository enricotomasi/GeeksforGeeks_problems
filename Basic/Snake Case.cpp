// { Driver Code Starts
#include <bits/stdc++.h>
#include<string>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    string snakeCase(string S , int n)
    {
        // code here
        string ans = "";
        
        for (char c : S)
        {
            if (c == ' ') ans+='_';
            else if (c <= 'Z' && c >= 'A') ans += c-('Z'-'z');
            else ans += c;
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string S;
        
        cin >> n;
        getline(cin >> std::ws, S);

        Solution ob;
        cout<<ob.snakeCase(S,n)<<endl;;
        
    }
    return 0;
}  // } Driver Code Ends