//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int lastRoom(int a[], vector<pair<int,int>> &vp, int n, int m, int k);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=0,m=0,k=0,i;
        cin>>n>>m>>k;
        int a[m];
        for(i=0;i<m;i++)
            cin>>a[i];
        int u,v;
        vector<pair<int,int>> vp;
        for(i=0;i<k;i++)
        {
            cin>>u>>v;
            vp.push_back({u,v});
        }
        
        cout<< lastRoom(a, vp, n, m, k) <<endl;
    }
}

// } Driver Code Ends



int lastRoom(int a[], vector<pair<int,int>> &vp, int n, int m, int k)
{
    // Your code goes here    
    
    int ans = 0;
    int arr[n+5] = {};
    int tmp = 1;
    
    bool chk = false; 
    
    int c = 0;
    int b = 0;
    
    for (int i=0; i<m; i++) arr[a[i]] = 1; 
        
    for (int i=0; i<k; i++)
    {
        c = vp[i].first; 
        b = vp[i].second; 
        
        if (chk) continue; 
            
        if (tmp == c)
        {
            if(arr[b] == 1) 
            {
                chk = true; 
                ans = b; 
            }
            else tmp = b; 
        }
        else if (tmp == b)
        {
            if (arr[c] == 1) 
            {
                chk = true; 
                ans = c;
            }
            else tmp = c; 
        }
    }
    
    if (chk) return ans; 
    return tmp; 
}

