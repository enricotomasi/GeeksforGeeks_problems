//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:

    int minMoves(int arr[],int n)
    {
        //code here.
        int ans = n;
        
        for (int i=n-1; i>=0; i--)
        {
            if (arr[i] == ans) ans--;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      int n;
      scanf("%d",&n);
      int arr[n]; 
      for(int i = 0; i < n; i++)
      scanf("%d",&arr[i]);
      Solution ob;
      cout << ob.minMoves(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends