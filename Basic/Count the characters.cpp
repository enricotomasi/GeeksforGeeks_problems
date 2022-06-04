 
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
        int getCount (string S, int N)
        {
            //code here.
            
            int mappa[256] = {};
            
            int last = '#';
            for (int i=0; i<S.length(); i++)
            {
                if (last != S.at(i)) mappa[(int)S.at(i)]++;
                last = S.at(i);
            }
            
            
            int ans = 0;
            
            for (int i=0; i<255; i++)
            {
                //if (mappa[i] != 0) cout << mappa[i] << " ";
                if (mappa[i] == N) ans++;
            }
        
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
        int n; cin >> n;
        
        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends