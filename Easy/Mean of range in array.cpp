//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
     vector<int> findMean(int arr[], int queries[], int n, int q)
    {
        // Complete the function
        vector<int> ans;
        
        int c = 0;
        for (int i=0; i<q/2; i++)
        {
            int sx = queries[c];
            int dx = queries[c+1];
            
            //cout << "Query N. " << i << " sx: " << sx << " dx: " << dx << endl;
            
            int tot = 0;
            for (int j=sx; j<=dx; j++)
            {
                tot += arr[j];
            }
            
            int media = tot / (dx-sx+1);
            
            ans.push_back(media);
            c += 2;
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
        int n,q;
        cin>>n>>q;
        int arr[n + 1],queries[2*q + 1];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<2*q;i++){
            cin>>queries[i];
        }

        vector<int> ans;
        Solution ob;
        ans = ob.findMean(arr,queries,n,2*q);

        for(int i:ans)
            cout<<i<<" ";
        cout<<endl;

    }
    return 0;
}

// } Driver Code Ends