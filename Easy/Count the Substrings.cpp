//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
        int n = S.length();
        int ans = 0;
        
        for (int i=0; i<n; i++)
        {
            int maiuscole = 0;
            int minuscole = 0;
            for (int j=i; j<n; j++)    
            {
                if      (S[j] >= 'A' && S[j] <= 'Z') maiuscole++;
                else if (S[j] >= 'a' && S[j] <= 'z') minuscole++;
                
                //cout << i << "# " << S[j] << " Maiuscole: " << maiuscole << " Minuscole: " << minuscole << endl;
                
                if (maiuscole == minuscole) ans++;
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
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends