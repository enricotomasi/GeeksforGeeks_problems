//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    static bool cmp(const pair<int, int> &a, const pair<int, int> &b)
    {
        if (a.second == b.second) return a.first > b.first;
        return a.second > b.second;
    }
    
    vector<int> TopK(vector<int>& array, int k)
    {
        // code here
        map<int, int> visits; // D-id, visits
        int n = array.size();
        
        //cout << n << endl;
        
        for (int i=0; i<n; i++)
        {
            //cout << array[i] << " ";
            visits[array[i]]++;      
        }
        //cout << endl;
        
        vector<pair<int, int>> v;
        
        for (auto it : visits)
        {
            //cout << it.first << ", " << it.second << endl;
            v.push_back({it.first, it.second});
        }
        //cout << endl;
        
        sort(v.begin(), v.end(), cmp);
        
        //for (auto it : v ) cout << it.first << ", " << it.second << endl;
        //cout << endl;
        
        vector<int> ans;
        
        int i=0; 
        while (k > 0)
        {
            ans.push_back(v[i].first);
            i++;
            k--;
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
        int n,k ;
        cin>>n;
        
        vector<int>array(n);
        
        for(int i=0; i<n; i++)
            cin>>array[i];
            
        cin>>k;
        
        Solution obj;
        vector<int> result = obj.TopK(array,k);
        
        for(int i=0; i<result.size();i++)
            cout<<result[i]<<" ";

        cout<<"\n";

    }
    return 0;
}
// } Driver Code Ends