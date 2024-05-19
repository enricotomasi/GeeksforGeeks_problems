//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX], int n, int m, int k)
    {
 		// Your code goes here.
 		
 		int r = 0;
 		int c = 0;
 		
 		int rr = n - 1;
 		int cc = m - 1;
 		
 		int temp = 1;
 		
 		while (temp <= k)
 		{
 		    for (int i = c; i <= cc; i++)
 		    {
 		        if (temp == k)
 		        {
 		            return a[r][i];
 		        }
 		        
 		        temp++;
 		    }
 		    
 		    r++;
 		    
 		    for (int i = r; i <= rr; i++)
 		    {
 		        if (temp == k)
 		        {
 		            return a[i][cc];
 		        }
 		        
 		        temp++;
 		    }
 		    
 		    cc--;
 		    
 		    for (int i = cc; i>= c; i--)
 		    {
 		        if (temp == k)
 		        {
 		            return a[rr][i];
 		        }
 		        
 		        temp++;
 		    }
 		    
 		    rr--;
 		    
 		    for (int i = rr; i >= r; i--)
 		    {
 		        if (temp == k)
 		        {
 		            return a[i][c];
 		        }
 		        
 		        temp++;
 		    }
 		    
 		    c++;
 		    
 		}
 		

    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends