//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int inizio=0;
        int fine=0;
        int somma=0;
        
        if (s==0)
        {
            for (int i=0; i<n; i++) if (arr[i] == 0) return {i+1, i+1};
            return {-1};
        }
        
        while (inizio <n && fine <= n)
        {
            if (somma<s)
            {
                somma=somma+arr[fine];
                fine++;
            }
            else if (somma>s)
            {
                somma -= arr[inizio];
                inizio++;
            }
            else
            {
                return {inizio+1, fine};
                break;
            }
        }
        
        return {-1};
        
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends