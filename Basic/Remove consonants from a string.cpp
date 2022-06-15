// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    string removeConsonants(string s)
    {
    //complete the function heredef removeConsonants(s):
    string ans = "";
    
    for (auto i : s)
    {
        if (i == 'a' || 
            i == 'e' || 
            i == 'i' || 
            i == 'o' || 
            i == 'u' || 
            i == 'A' || 
            i == 'E' || 
            i == 'I' || 
            i == 'O' || 
            i == 'U')
            ans += i;
    }
    
    if (ans != "") return ans;
    
    return "No Vowel";
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsonants(s) << "\n";
    }
return 0;
}  // } Driver Code Ends