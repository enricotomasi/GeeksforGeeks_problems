//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
public:    
    int swapBits(int x, int p1, int p2, int n)
    {
        // Code Here
        int ans = x;
        
        int off = p2 - p1;
        
        for (int i=0; i<32; i++)
        {
            if (x & (1 << i))
            {
                if (i >= p1 && i < p1 + n)
                {
                    ans -= (1 << i), ans += (1 << i + off);
                }
                
                if (i >= p2 && i < p2 + n)
                {
                    ans -= (1 << i), ans += (1 << i - off);
                }
            }
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
		int x,p1,p2,n;
		cin>>x>>p1>>p2>>n;
		Solution obj;
		int res=obj.swapBits(x,p1,p2,n);
		printf("%d\n", res);
	}
    return 0;
}
// } Driver Code Ends