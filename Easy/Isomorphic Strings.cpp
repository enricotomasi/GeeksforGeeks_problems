//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends

#include <set>
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        // Your code here
        int n1 = str1.length();
        int n2 = str2.length();
        
        if (n1 != n2) return false;
        if (n1 == 1) return true;
        
        map<char,char> mappa1;
        map<char,char> mappa2;

        for (int i=0; i<n1; i++)
        {
            mappa1[str1[i]]++;
            mappa2[str2[i]]++;
        }
        
        for (int i=0; i<n1; i++)
        {
            if (mappa1[str1[i]] != mappa2[str2[i]]) return false;
            mappa1[str1[i]]--;
            mappa2[str2[i]]--;
        }
        
        
      
        return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends