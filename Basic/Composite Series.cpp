//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> compositeNumbers(int N)
    {
        // code here
        bool primi[N+1];
        memset(primi, true, sizeof(primi));
        
        for (int i=2; i*i<=N; i++)
        {
            if (primi[i])
            {
                for (int j=i*i; j<=N; j+=i)
                {
                    primi[j] = false;
                }
            }
        }
        
        vector<int> ans;
        for (int i=2; i<=N; i++)
        {
            if (!primi[i]) ans.push_back(i);
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
        
        Solution ob;
        vector<int> ans = ob.compositeNumbers(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends