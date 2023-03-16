//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    vector<int> longestCommonPrefix(string str1, string str2)
    {
        // code here
        int n = str1.length();
        
        int inizio = 0;
        int fine = 0;
        
        int massimo = INT_MIN;
        
        for (int i=0; i<n; i++)
        {
            int pos = 0;
            
            if (str2[i] == str1[0])
            {
                for (int j = i+1; j<n; j++)
                {
                    if (str2[j] != str1[pos+1]) break;
                    pos++;
                }
                
                if (pos > massimo)
                {
                    fine = pos;
                    massimo = pos;
                }
            }
            
        }
        
        
        
        return {inizio, fine};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string str1,str2;
        cin >> str1>> str2;
        Solution ob;
        vector<int> p;
        p = ob.longestCommonPrefix(str1,str2);
        if(p[0]==-1)
        cout<<"-1\n";
        
        else
        cout<<p[0]<<" "<<p[1]<<"\n";
    }
    return 0;
}

// } Driver Code Ends