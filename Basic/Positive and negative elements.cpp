// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    vector<int> arranged(int a[],int n)
    {
        vector<int> ans;
        vector<int> positivi;
        vector<int> negativi;
        
        for (int i=0; i<n; i++)
        {
            if (a[i]>=0) positivi.push_back(a[i]);
            else negativi.push_back(a[i]);
        }
        
        for (int i=0; i<positivi.size(); i++)
        {
            ans.push_back(positivi[i]);
            ans.push_back(negativi[i]);
        }
        
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    vector<int> ans;
    Solution obj;
    ans=obj.arranged(a,n);
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    }
}
  // } Driver Code Ends