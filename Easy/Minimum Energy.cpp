//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int minEnergy(int a[], int n)
    {
        // Your code goes here
        int ans = 0;
        int temp = -1;
        
        for (int i=0; i<n; i++)
        {
            temp += a[i];
            
            //cout << i << "# a[i]: " << a[i] << " temp: " << temp;
            
            if (temp <= 0) 
            {
                //cout << " *** ";
                ans += (temp * -1);
                temp = 0;
            }

            //cout << " ans:" << ans << endl;
        }
 
        if (ans == 0) return 1;
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<< ob.minEnergy(a,n) <<endl;
	}
	return 0;
}
// } Driver Code Ends