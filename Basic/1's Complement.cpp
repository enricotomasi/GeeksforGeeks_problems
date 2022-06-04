 
// { Driver Code Starts
 
#include<bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends
  
class Solution
{ 
public:
    string onesComplement(string S,int N)
    {
        //code here
        string ans = "";
        
        for (int i=0; i<N; i++)
        {
            if (S.at(i) == '1') ans += '0';
            else ans += '1';
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.onesComplement(s,n)<<"\n";
    }
}  // } Driver Code Ends