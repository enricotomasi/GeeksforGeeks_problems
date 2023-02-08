//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution
{
  public:
  
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr)
  {
        //Code Here
        vector<long long int> ans(k,0);
        
        unordered_set<int> righe;
        unordered_set<int> col;
        
        long long int zeri = pow(n, 2);
        long long int uni = 0;
        long long int r = 0;
        long long int c= 0;;
        
        for (int i=0; i<k; i++)
        {
            righe.insert(arr[i][0]);
            col.insert(arr[i][1]);
            r = righe.size();
            c = col.size();
            uni = ((r+c)*n) - (r*c);
            ans[i] = zeri - uni;
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
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends