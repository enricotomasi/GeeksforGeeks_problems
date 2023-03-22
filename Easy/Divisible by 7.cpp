//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    int isdivisible7(string num)
    {
        //complete the function here
        int n = num.length();
        int div = 0;
        
        for (int i=0; i<n; i++)
        {
            div = (div * 10 + (num[i] - '0')) %7;
        }
        
        if (div == 0) return 1;
        
        return 0;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isdivisible7(s) << endl;
    }
    return 0;
}
// } Driver Code Ends