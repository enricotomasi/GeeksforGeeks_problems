//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string stringMirror(string str)
    {
        // Code here
        int n = str.length();
        
        string res = "";
        res += str[0];
    
        for (int i=1; i<n; i++)
        {
            if (str[i] < str[i-1] || (i != 1 && str[i] == str[i-1])) res += str[i];
            else                                                     break;
        }
    
        string rev = res;
        reverse(rev.begin(),rev.end());
        
        string ans = res + rev;
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends