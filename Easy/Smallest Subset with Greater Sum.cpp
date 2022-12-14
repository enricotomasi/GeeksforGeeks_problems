//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &Arr,int N)
    {
        int n = Arr.size();
        sort (Arr.begin(), Arr.end());
        
        long long int tot = 0;
        
        for (int i=0; i<n; i++) tot += Arr[i];
        
        int ans = 0;
        long long int parz = 0;
        int i = n-1;
        
        while (parz <= tot && i>=0)
        {
            parz += Arr[i];
            tot -= Arr[i];
            i--;
            ans++;
        }
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends