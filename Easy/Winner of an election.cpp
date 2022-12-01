//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution
{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        
        map<string, int> mappa;
        
        for (int i=0; i<n; i++)
        {
            mappa[arr[i]]++;
        }
        
        int voti = INT_MIN;
        string win = "";
        
        for (auto it = mappa.begin(); it != mappa.end(); it++)
        {
            if (it->second > voti)
            {
                voti = it->second;
                win = it->first;
            }
            
        }
        
       return {win, to_string(voti)};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends