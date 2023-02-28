//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string str)
    { 
        //code here.
        stack<char> lettere;
        queue<char> speciali;
        
        for (auto it : str)
        {
            if ((it >= 'a' && it <= 'z') || (it >= 'A' && it <= 'Z')) lettere.push(it);
            else                                                      speciali.push(it);
        }
        
        string ans = "";
        
        int i = 0;
        for (auto it : str)
        {
            if ((it >= 'a' && it <= 'z') || (it >= 'A' && it <= 'Z'))
            {
                ans += lettere.top();
                lettere.pop();
            }
            else
            {
                ans += speciali.front();
                speciali.pop();
            }
        }
        
        
        return ans;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    }
return 0;
}


// } Driver Code Ends