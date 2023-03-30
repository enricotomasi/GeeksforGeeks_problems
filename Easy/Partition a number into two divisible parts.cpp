//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
public:
    string stringPartition(string S, int a, int b)
    {
        // code here 

        int n = S.length();
        
        for (int i=1; i<n; i++)
        {
            string sa = S.substr(0,i);
            string sb = S.substr(i, n-i);
            
            // cout << sa << " " << sb << endl;
            
            int ia = stoi(sa);
            int ib = stoi(sb);
            
            if ((ia % a == 0) && (ib % b == 0))
            {
                return sa + " " + sb;
            }
            
        }
        
        return "-1";
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {   
        int a,b;
        string S;
        cin >> S >> a >> b;
        Solution ob;
        cout << ob.stringPartition(S,a,b) << endl;
    }
    return 0; 
} 
// } Driver Code Ends