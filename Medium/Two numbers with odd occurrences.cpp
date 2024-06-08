//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        long long int first = 0;
        long long int second = 0;
        
        long long int temp = 0;
        
        for (int i = 0; i < N; i++)
        {
            temp ^= Arr[i];
        }
        
        temp &= -temp;
        
        for (int i = 0; i < N; i++)
        {
            if (Arr[i] & temp)
            {
                first ^= Arr[i];
            }
            else
            {
                second ^= Arr[i];
            }
        }
        
        vector<long long int> ans = {first, second};
        
        sort(ans.begin(), ans.end(), greater<long long int>());
        
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
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends