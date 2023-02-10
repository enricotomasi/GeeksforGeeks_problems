//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s)
    {
        /*
            0	b
            1	a
            2	l
            3	o
            4	n
            5	s
        */
        
        int mappa[5] = {};
        
        bool mezzaO = false;
        bool mezzaL = false;
        
        for (char c : s)
        {
            if      (c == 'b') mappa[0]++;
            else if (c == 'a') mappa[1]++;
            else if (c == 'l')
            {
                if (mezzaL)
                {
                    mappa[2]++;
                    mezzaL = false;
                }
                else mezzaL = true;
            }
            else if (c == 'o')
            {
                if (mezzaO)
                {
                    mappa[3]++;
                    mezzaO = false;
                }
                else mezzaO = true;
            }
            else if (c == 'n') mappa[4]++;
            else if (c == 's') mappa[5]++;
        }
        
        int ans = INT_MAX;
        
        for (int i=0; i<5; i++)
        {
            ans = min(ans, mappa[i]);
        }
        
        if (ans == INT_MAX) return 0;
        return ans;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends