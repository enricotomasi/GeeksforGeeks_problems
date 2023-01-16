//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int search(string text, string pat)
	{
	    // Your code goes here
	    int nt = text.length();
	    int np = pat.length();
	    
	    for (int i=0; i<nt; i++)
	    {
	        if (text[i] == pat[0])
	        {
	            bool trovato = true;
	            int j=i+1;
	            
	            for (int k=1; k<np; k++)
	            {
	                if (j > nt-1 || text[j] != pat[k])
	                {
	                    trovato = false;
	                    break;
	                }
	                
	                j++;
	            }
	            
	            if (trovato) return 1;
	        }
	    }
	    
        return 0;	    
	    
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