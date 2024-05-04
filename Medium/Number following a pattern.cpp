//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

// Idea is to iterate over input array and keep track of last printed digit and maximum digit printed so far. 

class Solution
{   
public:
    string printMinNumberForPattern(string S)
    {
        // code here
        int n = S.size();
        string ans="";
        
        
        for (int i = 1; i <= n + 1; i++)
        {
            ans += '0' + i;
        }

        bool check = false;
        
        while (!check)
        {
            check = true;

            for (int i = 1; i <= n; i++)
            {
               
                if (S[i - 1] == 'D' && ans[i] > ans[i - 1])
                {
                    swap(ans[i], ans[i - 1]);
                    check = false;
                } 
                
                if (S[i - 1] == 'I' && ans[i] < ans[i - 1])
                {
                    swap(ans[i], ans[i- 1]);
                    check = false;
                }

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
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends