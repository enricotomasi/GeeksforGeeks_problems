//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution
{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x)
    {
        //code here
        /*
                                       ***  HINT ***
        
            1) Initialize a variable diff as infinite (Diff is used to store the 
               difference between pair and x).  We need to find the minimum diff.
            2) Initialize two index variables l and r in the given sorted array.
                (a) Initialize first to the leftmost index in ar1:  l = 0
                (b) Initialize second  the rightmost index in ar2:  r = n-1
            3) Loop while  l = 0
                (a) If  abs(ar1[l] + ar2[r] - sum) < diff  then 
                    update diff and result 
                (b) If (ar1[l] + ar2[r] <  sum )  then l++
                (c) Else r--    
            4) Print the result.
        */
        
        int diff = INT_MAX;
        
        int inizio = 0;
        int fine = m-1;
        
        int a1 = -1;
        int a2 = -1;
        
        while (inizio < n && fine >= 0)
        {
            int d1 = abs(arr[inizio] + brr[fine] - x);
            if (d1 < diff)
            {
                diff = d1;
                a1 = arr[inizio];
                a2 = brr[fine];
            }
            
            if (arr[inizio] + brr[fine] < x) inizio++;
            else                             fine--;
        }
        
        // cout << a1 << " " << a2 << endl;
        
        return {a1, a2};
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends