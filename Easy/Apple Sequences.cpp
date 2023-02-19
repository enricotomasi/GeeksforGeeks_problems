//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    int appleSequences(int n, int m, string arr)
    {
        // code here
        int ans = 0;
        
        int inizio = 0;
        int fine = 0;
        
        int temp = 0;
        
        while (fine < n)
        {
            if (arr[fine] == 'O') temp++;
            
            while (inizio < n && temp > m)
            {
                if (arr[inizio] == 'O') temp--;
                inizio++;
            }
            
            ans = max(ans, fine-inizio+1);
            fine++;
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
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends