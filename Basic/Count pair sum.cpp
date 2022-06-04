 
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    int countPairs(int arr1[], int arr2[],  int m, int n, int x) 
    { 
        //code here.
        int coppie = 0;
        
        for (int i=0; i<m; i++)
        {
            int primo = arr1[i];
            if (primo >= x) continue;
            for (int j=0; j<n; j++)
            {
                int secondo = arr2[j];
                if (secondo >= x) continue;
                if (primo+secondo == x) coppie++;
            }
        }
        
        return coppie;
    } 
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    int arr1[m],arr2[n];
	    int x ;
	    for(int i=0;i<m;i++)
	        cin>>arr1[i];
	    for(int j=0;j<n;j++)
	        cin>>arr2[j];
	    cin>>x;
	    Solution ob;
	    cout <<ob.countPairs(arr1, arr2, m, n, x)<<endl;
	}
	return 0;	 
}

  // } Driver Code Ends