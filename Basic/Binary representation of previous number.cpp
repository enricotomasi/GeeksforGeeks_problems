//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    
    string binaryPreviousNumber(string S)
    {
    	//code here.
    	
        int i = 0;
        int n = S.length();
        
        while(S[i] == '0')
        {
            i += 1;
        }
        
        S = S.substr(i, n);
        if(S[0] == '1' && S[1] == '\0') return "0";
        
        string ans = "";
        i = S.size()-1;
        
        while(S[i] == '0')
        {
            ans += "1";
            i -= 1;
        }
        
        ans += "0";
        
        i -= 1;
        while(i >= 0)
        {
            ans += S[i];
            i -= 1;
        }
        
        reverse(ans.begin(), ans.end());
        
        i = 0;
        n = ans.length();
        while(ans[i] == '0')
        {
            i += 1;
        }
        
        return ans.substr(i, n);
    	
    	
    }
  
};

//{ Driver Code Starts.
int main() 
{

   
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
        Solution ob;
   		cout <<ob.binaryPreviousNumber(s);

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends