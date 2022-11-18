//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        int ns = str.length();
        int np = patt.length();
        
        set<char> mappa;
        for (int i=0; i<np; i++)
        {
            mappa.insert(patt[i]);
        }
        
        for (int i=0; i<ns; i++)
        {
            if (mappa.find(str[i]) != mappa.end()) return i;
        }
        
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends