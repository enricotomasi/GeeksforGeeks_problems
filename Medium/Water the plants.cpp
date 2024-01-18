//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int min_sprinklers(int gallery[], int n)
    {
        // code here
        vector<int> arr(n, -1);
        
        for (int i = 0; i < n; i++)
        {
            if (gallery[i] != -1)
            {
                int el = max((i - gallery[i]), 0);
                
                int a = arr[max((i - gallery[i]), 0)];
                int b = min((gallery[i] + i), (n - 1));
                
                arr[el] = max(a, b);
            }
        }
        
        int ans = 0;
        int temp = -1;
        
        for (int i = 0; i < n; i++)
        {
            temp = max(temp, arr[i]);
            if (temp < i) return -1;
            
            ans++;
            int c = -1;
            
            while (i < temp)
            {
                c = max(c,arr[i]);
                i++;
            }
            
            c = max(arr[i], c);
            temp = max(temp, c);
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
        
        int gallery[n];
        for(int i=0; i<n; i++)
            cin>> gallery[i];
        Solution obj;
        cout<< obj.min_sprinklers(gallery,n) << endl;
    }
	return 1;
}

// } Driver Code Ends
