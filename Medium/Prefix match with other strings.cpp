//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    int klengthpref(string arr[], int n, int k, string str)
    {    
        if (k > str.length())
        {
            return 0;
        }
        
        string s = str.substr(0, k);
        //cout << s << endl;
        
        int ans = 0;
        
        for (int i = 0; i < n; i++)
        {
            string sa = arr[i].substr(0, k);
            if (sa == s)
            {
                ans++;
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
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>arr[i];
            
        }
        int k;
        cin>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout << ob.klengthpref(arr, n, k, str) << endl;
    }
    return 0; 
} 

// } Driver Code Ends