//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        
        unordered_map<int, int> m;
        
        int z = 0;
        int o = 0;
        
        long long ans = 0;
        
        for (int i = 0; i < n; i++)
        {
            if (arr[i]==0)
            {
                z++;
            }
            else
            {
                o++;
            }
            
            if (z - o == 0)
            {
                ans++;
            }
            
            if (m.find(z - o) != m.end())
            {
                ans += m[z - o];
            }
            
            m[z - o]++;
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
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}

// } Driver Code Ends
