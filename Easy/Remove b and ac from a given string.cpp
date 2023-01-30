//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:
    string stringFilter(string str) 
    { 
        //code here.
        int n = str.length();
        string ans = "";
        
        for (int i=0; i<n; i++)
        {
            if (str[i] == 'b') continue;
            
            if (i != n-1 && str[i] == 'a' && str[i+1] == 'c')
            {
                i++;
                continue;
            }
            
            ans += str[i];
        }
        
        
        return ans;
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
   		cout <<ob.stringFilter(s) << "\n";

   		
   	}

    return 0;
}
// } Driver Code Ends