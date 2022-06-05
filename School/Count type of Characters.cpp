 
// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            int upper = 0;
            int lower = 0;
            int num = 0;
            int spec = 0;
            
            for (int i=0; i<s.length(); i++) {
                int car = s.at(i);
                if (car > 64 && car < 91) upper++;
                else if (car >96 && car < 123) lower++;
                else if (car >47 && car < 58) num++;
                else spec++;
            }
            
            vector <int> ans;
            
            ans.push_back(upper);
            ans.push_back(lower);
            ans.push_back(num);
            ans.push_back(spec);
            
            return ans;
            
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal  // } Driver Code Ends