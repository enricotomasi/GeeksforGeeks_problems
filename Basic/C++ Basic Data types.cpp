 
// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User functiom template for C++

class Solution 
{
  public:
    int BasicDataType(string s)
    {
        // code here
        
        if (s.size() == 1 && !isdigit(s[0])) return 1; // char
        
        if (s.find('.') == string::npos) return 4; // int
        
        int punto = s.find('.');
        int grandezza = s.size();
        
        if (grandezza-punto >= 7) return 8; // double
        
        return 4; // float
        
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.BasicDataType(S) << endl;
    }
}  // } Driver Code Ends