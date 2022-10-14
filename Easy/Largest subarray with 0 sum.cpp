//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int> mappa;
        
        int somma = 0;
        int ans = 0;
        
        for (int i=0; i<n; i++)
        {
            somma += A[i];
            
            if (A[i] == 0 && ans == 0) ans = 1;
            if (somma == 0) ans = i+1;
            
            if (mappa.find(somma) != mappa.end()) 
            {
                ans = max(ans, i-mappa[somma]);
            }
            else
            {
                mappa[somma] = i;
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
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends