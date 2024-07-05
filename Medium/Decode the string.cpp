//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    string decodedString(string s)
    {
        // code here
        stack<string> stack;
    
        for (auto c : s)
        {
            if (c == ']')
            {
                string s2 = "";
                
                while (!stack.empty() && (stack.top()[0] < '0' || stack.top()[0] > '9'))
                {
                    string top = stack.top();
                    
                    if (top != "[")
                    {
                        s2 += top;
                    }
                    
                    stack.pop();
                }
                
                string num = "";
                
                while (!stack.empty() && (stack.top()[0] >= '0' && stack.top()[0] <= '9'))
                {
                    num += stack.top();
                    stack.pop();
                }
                
                reverse(num.begin(), num.end());
                
                int nn = stoi(num);
                
                string temp = "";
                
                for (int i = 0; i < nn; i++)
                {
                    temp += s2;
                }
                
                stack.push(temp);
            }
            else
            {
                string temp(1, c);
                stack.push(temp);
            }
        }
        
        string ans = "";
        
        while (!stack.empty())
        {
             ans += stack.top();
             stack.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends