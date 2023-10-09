//{ Driver Code Starts
//initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    static bool mycmp(std::pair<int, int> a, std::pair<int, int> b) 
    {
        if (a.first < b.first) return true;
        else if (a.first == b.first && a.second > b.second) return true;
        else return false;
}
    
    public:
    int StackingUpDiscs(int N,int R[],int H[])
    {
        //code here
        vector<pair<int,int>> arr;

        int dp[N + 1];

        for (int i=0; i<N; i++)
        {
            arr.push_back({R[i], H[i]});
        }

        sort(arr.begin(), arr.end(), mycmp);

        dp[0] = arr[0].second;
        int ans = dp[0];

        for(int i=1; i<N; i++)
        {
            dp[i] = arr[i].second;
            for (int j=0; j<i; j++)
            {
                if (arr[i].first > arr[j].first && arr[i].second > arr[j].second)
                {
                   dp[i] = max(dp[i], dp[j] + arr[i].second);
                }
            }

            ans=max(ans, dp[i]);

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
        int R[N],H[N];
        for(int i=0;i<N;i++)
         cin>>R[i]>>H[i];
         
        Solution ob;
        cout<<ob.StackingUpDiscs(N,R,H)<<endl; 
    }
}
// } Driver Code Ends