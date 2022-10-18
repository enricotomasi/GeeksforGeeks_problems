//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b)
    {
        // Your code here
        int mappaA[256] = {};
        int mappaB[256] = {};
        
        for (char c : a)
        {
            mappaA[(int)c]++;
        }
        
        for (char c: b)
        {
            mappaB[(int)c]++;
        }
        
        for (int i=0; i<256; i++)
        {
            if (mappaA[i] != mappaB[i]) return false;
        }
        
        return true;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends