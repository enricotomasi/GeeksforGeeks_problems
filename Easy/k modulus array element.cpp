//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
        int printEqualModNumbers (int arr[], int n)
        {
            //code here.
            if (n == 1) return -1;
            
            int m = *max_element(arr, arr+n);
            int conta = 1;
            int ans = 0; 
            int k = -1;
            
            while (m > 0)
            {
                k = arr[0] % m;
                
                for (int i = 1; i < n; i++)
                {
                    if (k == arr[i] % m) conta++;
                }
             
                if (conta == n) ans++;
                 
                conta = 1;
                m--;
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
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
    	int counter=ob.printEqualModNumbers(arr, n);
	    cout<< counter << endl;
	}
	return 0;
}
// } Driver Code Ends