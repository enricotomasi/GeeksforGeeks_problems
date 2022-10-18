//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<string> st;
        string temp = "";
        
        for (char c : S)
        {
            if (c == '.')
            {
                st.push(temp);
                temp = "";
            }
            else
            {
                temp += c;
            }
        }
        
        st.push(temp);
        
        string ans = st.top();
        st.pop();
        
        while (!st.empty())
        {
            ans += '.';
            ans += st.top();
            st.pop();
        }
        return ans;
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends