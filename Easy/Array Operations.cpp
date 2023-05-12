//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int arrayOperations(int n, vector<int> &arr)
    {
        // code here
        if (n == 0) return -1;
        
        if (n == 1)
        {
            if (arr[0] != 0) return -1;
            else             return 0;
        }
        
        int ans = 1;
        bool tz = true;
        bool tdz = true;
        
        for (int i=1; i<n; i++)
        {
            if (arr[i-1] == 0 && arr[i] != 0)
            {
                ans++;
            }
            
            if (arr[i-1] != 0 || arr[i] != 0) tz = false;
            
            if (arr[i-1] == 0 || arr[i] == 0) tdz = false;
            
        }
        
        if (tz) return 0;
        
        if (tdz) return -1;
        
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
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends