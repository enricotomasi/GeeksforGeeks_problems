//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int resto(int a, string b)
    {
        int ans = 0;
        
        for(int i=0; i<b.length(); i++)
        {
            ans = (ans*10 + (b[i] - '0')) %4;
        }
    
        return ans;
  }
    
    int getLastDigit(string a, string b)
    {
        // code here
        if (b.length() == 1 && b == "0") return 1;
        
        if (a == "1") return 1;

        int esponente;
        
        int r = resto(4, b);
        if (r == 0) esponente = 4;
        else esponente = r;

        return (int)(pow(a[a.length() - 1] - '0', esponente)) %10;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a,b;
        
        cin>>a>>b;

        Solution ob;
        cout << ob.getLastDigit(a,b) << endl;
    }
    return 0;
}
// } Driver Code Ends