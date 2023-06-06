//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    vector<string> yShapedPattern(int N) 
    {
        // code here
        vector<string> ans;
        
        int prima = floor(N/2);
        int seconda = prima;
        
        int spazinizio = 0;
        int spazi = N-1;
        
        if (N % 2 != 0)
        {
            spazi -= 1;
            seconda++;
        }
        
        // cout << prima << " " << seconda << endl;
        int spaziorig = spazi;
        
        for (int i=0; i<prima; i++)
        {
            string s = "";
            
            for (int j=0; j<spazinizio; j++)
            {
                s += ' ';
            }
            
            s += '*';
            for (int j=0; j<spazi; j++)
            {
                s += ' ';
            }
            
            s += '*';
        
            for (int j=0; j<spazinizio; j++)
            {
                s += ' ';
            }
        
            spazi -= 2;
            spazinizio++;
            
            ans.push_back(s);
        }
        
        string rigaseconda = "";
        
        for (int i=0; i<prima; i++)
        {
            rigaseconda += ' ';
        }
        
        rigaseconda += '*' + rigaseconda;
        
        for (int i=0; i<seconda; i++)
        {
            ans.push_back(rigaseconda);
        }
        
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<string> v = ob.yShapedPattern(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    return 0;
}
// } Driver Code Ends