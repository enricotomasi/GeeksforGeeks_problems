// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
public:
    string magicalString(string S)
    {
        // code here 
        string ans = "";
        
        for (auto c: S)
        {
            int diff = (int)c-97;
            int cd = 122-diff;
            //cout << diff << " " << cd << " *** ";
            ans+=(char)cd;
        }
        
        return ans;
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.magicalString(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends