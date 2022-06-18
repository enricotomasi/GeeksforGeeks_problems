// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
    string gameResult (string s)
        {
            //code here.
            
            char a = s.at(0);
            char b = s.at(1);
            
            
            if (a==b) return "DRAW";
            
            if ( (a=='R' && b=='S') ||
                 (a=='S' && b=='P') ||
                 (a=='P' && b=='R') )
                 return "A";
                 
            return "B";
            
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
        cout <<ob.gameResult (s) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends