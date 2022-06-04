 
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

class Solution
{
  public:
    
    int extractMaximum(string S) 
    { 
        //code here.
        int n = S.length();
        vector<int> numeri;
        
        char ultimo = 'f';
        string buf = "";
        for (int i=0; i<n; i++)
        {
            char c = S.at(i);
            int nc = (int)c;
            if (nc >= 48 && nc <= 57) // numero
            {
                buf += c;
            }
            else // lettera
            {
                if (buf != "")
                {
                    numeri.push_back(atoi(buf.c_str()));
                    buf = "";
                }
            }
        }
        
        if (buf != "")
        {
            numeri.push_back(atoi(buf.c_str()));
        }
        
        int ans = -1;
        for (auto num : numeri)
        {
            ans = max(ans,num);
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
        cin>>S;
        Solution ob;
        cout<<ob.extractMaximum(S)<<endl;
    }
    return 0; 
}   // } Driver Code Ends