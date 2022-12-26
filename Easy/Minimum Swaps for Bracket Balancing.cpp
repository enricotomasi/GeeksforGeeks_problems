//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
public:
    int minimumNumberOfSwaps(string S)
    {
        // code here 
        /*
            Hint:
            Try thinking is it efficient to bring the next opening bracket character 
            when we count the number of closing bracket sequences more than opening brackets.
        */
        
        
        int n = S.length();
        int aperte = 0;
        int chiuse = 0;
        int ans = 0;
        
        for(int i=0; i<n; i++)
        {
            if (S[i] == ']') chiuse++;
            else
            {
                if (chiuse > aperte) ans += chiuse - aperte;
                aperte++;
            }
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
} 
// } Driver Code Ends