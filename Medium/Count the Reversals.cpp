//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


/*

A simple bruteforce will require the reversal of each character recursively and checking 
if you get a balanced string with that reversal or not. Also, keeping a track for the minimum 
number of such reversals required to get a balanced string.
But this approach would have exponential time complexity. 

Can we make it better?

Keep the track of the number of opening and closing braces as you traverse the sequence.
It's all fine till op ≥ cl.

But, as cl exceeds op, we need to do some reversals. 

Try fixing the unbalance as you encounter this.


*/


int countRev (string s)
{
    // your code here
    int n = s.length();
    
    if (n % 2 != 0)
    {
        return -1;
    }
    
    int op = 0;
    int cl = 0;
    int ans = 0;
    
    for (char c : s)
    {
        if (c == '{')
        {
            op++;
        }
        else if (c == '}' && op == 0)
        {
            cl++;
        }
        else
        {
            op--;
        }
    }
    
    return ceil(op / 2.0) + ceil(cl / 2.0);
    
}
