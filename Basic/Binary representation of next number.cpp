//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    string binaryNextNumber(string S)
    {
        //code here.
        int n = S.length();
        string ans = "";
        int primozero = -1;
        
        for (int i=n-1; i>=0; i--)
        {
            if (S.at(i) == '0')
            {
                primozero=i;
                break;
            }
        }
        
        if (primozero < 0)
        {
            ans += '1';
            for (int i=0; i<n; i++)
            {
                ans +='0';
            }
            return ans;
        }
        
        bool ok = false;
        for (int i=0; i<primozero; i++)
        {
            if (ok)
            {
                ans += S.at(i);
            }
            else
            {
                if (S.at(i) == '1')
                {
                    ok = true;
                    ans += S.at(i);
                }
            }
            
        }
        
        ans += '1';
        
        for (int i=primozero+1; i<n; i++)
        {
            ans += '0';
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
   		cout <<ob.binaryNextNumber(s);
   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends