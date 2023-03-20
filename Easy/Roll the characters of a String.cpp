//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	string findRollOut(string s, long long arr[], int n)
	{
	    // Your code goes here
	    int mappa[n+1] = {};
        
        for(int i=0; i<n; i++)
        {
            mappa[0]++;
            mappa[arr[i]] -= 1;
        }
        
        for(int i=1; i<n; i++)
        {
            mappa[i] += mappa[i - 1];
        }
        
        for(int i=0;i<n;i++)
        {
            s[i] = 'a' + (s[i] -'a' +mappa[i]) %26;
        }
        
        return s;
	}
};
	  


//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        string s;
        cin>>s;
        long long roll[n];
        for(int i=0;i<n;i++)
            cin>>roll[i];

       

        Solution ob;

        string res = ob.findRollOut(s, roll, n);
        cout << res;
		

        
	    cout << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends