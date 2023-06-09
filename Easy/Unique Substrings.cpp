//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int unique_substring(string str)
    {
        // Your code here
        unordered_set<string> arr;
        
        for (int i=0; i<str.length(); i++)
        {
            for (int j=0; j<str.length(); j++)
            {
                arr.insert(str.substr(i, j));
            }
        }
        
        return arr.size();
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t-->0){
        string str;
        cin>>str;
        Solution ob;
        int ans= ob.unique_substring(str);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends