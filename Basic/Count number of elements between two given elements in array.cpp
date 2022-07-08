// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int getCount(int arr[], int n, int num1, int num2)
    {
        //Complete the function 
        int pos1 = 0;
        int pos2 = 0;
        
        for (int i=0; i<n; i++)
        {
            if (arr[i] == num1)
            {
                pos1 = i;
                break;
            }
        }
        
        for (int i=n-1; i>=0; i--)
        {
            if (arr[i] == num2)
            {
                pos2 = i;
                break;
            }
        }
        
        int ans = pos2-pos1-1;
        if (ans <=0 ) ans = 0;
        
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
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int num1,num2;
	    cin>>num1>>num2;
	    Solution ob;
	    cout << ob.getCount(a, n, num1, num2) <<"\n";
	}
	return 0;
}
  // } Driver Code Ends