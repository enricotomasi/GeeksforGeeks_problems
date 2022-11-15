//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int> stac;
        
        for (char c : S)
        {
            if (c >= '0' && c <= '9') stac.push(c-'0');
            else
            {
                int e1 = 1;
                if (!stac.empty())
                {
                    e1 = stac.top();
                    stac.pop();
                }
                
                int e2 = 1;
                if (!stac.empty())
                {
                    e2 = stac.top();
                    stac.pop();
                }
                
                int res = 0;
                
                if      (c == '*') res = e2*e1;
                else if (c == '/') res = e2/e1;
                else if (c == '-') res = e2-e1;
                else if (c == '+') res = e2+e1;
                
                stac.push(res);
            }
        }
    
        return stac.top();
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends