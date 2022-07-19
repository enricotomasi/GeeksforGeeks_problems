//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
public:
    vector<int> countChars (string s)
    {
        // code here
        vector<int> ans;
        
        int temp = 0;
        for (int i=0; i<s.length(); i++)
        {
            if (s.at(i) != ' ') temp++;
            else
            {
                ans.push_back(temp);
                temp = 0;
            }
        }
        
        if (temp != 0) ans.push_back(temp);
        
        return ans;
        
    }
};

//{ Driver Code Starts.
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
        vector <int> result = ob.countChars(s);
        for (int i : result)
            cout << i << " ";
        cout << endl;
    }
}
// } Driver Code Ends