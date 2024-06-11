//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
    void rec(vector<int> &arr, set<vector<int>> &set, vector<int> vec, int n)
    {
        int na = arr.size();
        
        if (n == na)
        {
            return;
        }
        
        vec.push_back(arr[n]);
        set.insert(vec);
        
        for (int i = n + 1; i < na; i++)
        {
            rec(arr, set, vec, i);
        }
    }
    
    vector<vector<int>> AllSubsets(vector<int> arr, int n)
    {
        // code here 
        sort(arr.begin(),arr.end());
        
        vector<int> vec;
        
        set<vector<int>> set;
        set.insert(vec);
        
        for (int i = 0; i < n; i++)
        {
            rec(arr, set, vec, i);
        }
        
        vector<vector<int>> ans;
        
        for (auto it : set)
        {
            ans.push_back(it);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   



// } Driver Code Ends