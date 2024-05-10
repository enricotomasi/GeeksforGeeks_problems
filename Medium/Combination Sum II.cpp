//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    void rec(vector<int>& arr, int sum, int pos, vector<int>& v, int na, vector<vector<int>>& ans)
    {
        if (sum == 0)
        {
            ans.push_back(v);
            return;
        }

        for (int i = pos; i < na; i++)
        {
            if (i > pos && arr[i] == arr[i - 1])
            {
                continue;
            }

            if (arr[i] > sum)
            {
                break;
            }

            v.push_back(arr[i]);
            
            rec(arr, sum - arr[i], i + 1,  v, na, ans);
            
            v.pop_back();
        }
    }
    
    vector<vector<int>> CombinationSum2(vector<int> arr, int n, int k)
    {
        //code here
        vector<vector<int>> ans;
        vector<int> v;
        
        int na = arr.size();

        sort(arr.begin(), arr.end());

        rec(arr, k, 0, v, na, ans);

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
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
