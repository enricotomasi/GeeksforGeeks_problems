//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
    {
        //code here.
        stack<string> numeri;
        stack<char> simboli;
        
        string temp = "";
        for (auto c : s)
        {
            if  (c >= '0' && c <= '9')
            {
                temp += c;
            }
            else
            {
                if (temp != "")
                {
                    numeri.push(temp);
                }
                
                simboli.push(c);
                
                temp = "";
            }
         }
         
         if (temp != "")
        {
            numeri.push(temp);
        }
         

        string ans = "";
        
        while (!numeri.empty() || !simboli.empty())
        {
            
            if (!numeri.empty())
            {
                ans += numeri.top();
                numeri.pop();
            }
            
            if (!simboli.empty())
            {
                ans += simboli.top();
                simboli.pop();
            }
            
            // cout << numeri.size() << " " << simboli.size() << endl;
        }


        return ans;

    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends