//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
  public:
    vector<int> countArray(int a[], int n, int x)
    {
        // Complete the function
        vector<int> ans;
        for (int i=0; i<n; i++)
        {
            int media = floor(a[i]+x)/2;
            int conta = 0;
            
            for (int j=0; j<n; j++)
            {
                if (a[j] == media) conta++;
            }
            
            ans.push_back(conta);
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
        int n, x;
        cin>>n;
        cin>>x;
        int a[n+1];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        vector<int> b;
        Solution obj;
        b = obj.countArray(a, n, x);
        for(int i=0;i<n;i++)
            cout << b[i] << " ";
        
        cout << endl;
    }
}

// } Driver Code Ends