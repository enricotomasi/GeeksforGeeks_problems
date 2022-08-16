//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for Java
class Solution
{
    public:
    bool palindromo(string s)
    {
        int n = s.length();
        
        string s1 = s.substr(0,n/2);
        string s2 = "";
        
        if (n%2!=0) s2 = s.substr((n/2)+1,n/2);
        else s2 = s.substr(n/2,n/2);
        
        reverse(s2.begin(), s2.end());
        
        //cout << s << "    " << s1 << "***" << s2 << endl;
        
        return (s1==s2);
    }
    
    string binario(unsigned int n)
    {
        string ans = "";
        while (n)
        {
            if (n%2==0) ans = '0' + ans;
            else ans = '1' + ans;
            n/=2;
        }

        return ans;
    }
    
    string isDeciBinPalin(unsigned int  N)
    {
        // code here
        string s1 = to_string(N);
        string s2 = binario(N);
        
        if (palindromo(s1) && palindromo(s2)) return "Yes";
        return "No";
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        unsigned int N;
        cin >> N;
        Solution ob;
        cout<<ob.isDeciBinPalin(N)<<endl;
    }
    return 0;
}

// } Driver Code Ends