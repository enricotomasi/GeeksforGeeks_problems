//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        //code here.
        int n = str.length();
        
        vector<char> caratteri;
        int numeri = 0;
        
        for (int i=0; i<n; i++)
        {
            if (str[i] >= '0' && str[i] <= '9') numeri += str[i] - '0';
            else                                caratteri.push_back(str[i]);
        }
        
        sort (caratteri.begin(), caratteri.end());
        
        string ans = "";
        for (char c: caratteri)
        {
            ans += c;
        }
        
        if (numeri >0) ans += to_string(numeri);
        return ans;
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
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}


// } Driver Code Ends