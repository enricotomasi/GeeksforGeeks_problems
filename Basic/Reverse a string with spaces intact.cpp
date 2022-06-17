// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
  
        string reverseWithSpacesIntact (string s)
        {
            //code here.
          
            string ans = "";
            int i = 0;
            int j = s.length()-1;
            
            while (i<j)
            {
                if (s[i] == ' ') i++;
                else if (s[j] == ' ') j--;
                else
                {
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }
                
            }
            
            return s;
        }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout << ob.reverseWithSpacesIntact (s) << endl;
    }
    return 0;
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends