//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str)
    {
        // your code here
        int n = str.length();
        int mappa[26] = {};
        
        
        for (int i=0; i<n; i++)
        {
            int c = str[i];
            if (c == 32) continue;
            
            // cout << c << " ";
            if (c > 90) c-= 97;
            else        c-= 65;
            
            // cout << c << endl;
            mappa[c]++;
        }
        
        for (int i=0; i<26; i++)
        {
            // cout << mappa[i] << " ";
            if (mappa[i] < 1) return false;
        }
        
        return true;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string str;
        getline(cin, str);
        Solution obj;
        if (obj.checkPangram(str) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends