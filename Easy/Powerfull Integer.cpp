//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int powerfullInteger(int n, vector<vector<int>> &intervals, int k)
    {
        // Code here
        
        // Hint 1: We can try to maintain count of occurence of first and last elements of an interval
        
        vector<pair<int,int>> mappa;
        
        for(auto it : intervals)
        {
            mappa.push_back({it[0], '0'}) ;
            mappa.push_back({it[1], '1'}) ;
        }
        
        sort(mappa.begin(), mappa.end());
        
        int contatore = 0;
        int ans = -1;
        
        for(auto p:mappa)
        {
            if (p.second == '0')
            {
                contatore++;
                if (contatore >= k) ans = p.first;
            }
            else
            {
                if (contatore >= k) ans = p.first;
                contatore--;
            }
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vector<vector<int>> intervals(n,vector<int>(2));
        for(int i=0;i<n;i++){
            cin>>intervals[i][0]>>intervals[i][1];
        }
        cin>>k;
        Solution ob;
        cout<<ob.powerfullInteger(n,intervals,k)<<endl;
    }
    return 0;
}
// } Driver Code Ends