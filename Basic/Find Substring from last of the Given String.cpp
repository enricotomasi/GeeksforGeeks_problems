//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:		

	int search(string X, string Y)
	{
	    // Your code goes here
	    int n = X.length();
	    int m = Y.length();
	    
	    int index = -1;
	    
	    for (int i=0; i<n; i++)
	    {
	        if (X.at(i) == Y.at(0))
	        {
	            int c1=i+1;
	            int c2=1;
	            int ind_temp = i;
	            if (m==1)
	            {
	                index = ind_temp;    
	            }
	            else
	            {
    	            while (c1<n && c2<m)
    	            {
    	                if (X.at(c1) == Y.at(c2))
    	                {
    	                    c1++;
    	                    c2++;
    	                    if (c2 >= m)
    	                    {
    	                        index = ind_temp;
    	                        break;
    	                    }
    	                }
    	                else break;
    	            }
	            }
	            
	        }
	    }
	    
	    int ans = index+1;
	    if (index <0) ans = -1;
	    
	    return ans;
	    
	}
};

//{ Driver Code Starts.

int main() 
{


   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string x, y;
   		cin >> x >> y;
        Solution ob;

   		cout << ob.search(x, y) << "\n";
   	}

    return 0;
}
// } Driver Code Ends