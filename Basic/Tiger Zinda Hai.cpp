
// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int count_tabs(string arr[], int n)
    {
        // Complete the function
        int mappa[100001] = { };

        int cur = n-1;
        while (cur >= 0 && arr[cur] != "END")
        {
            int c = stoi(arr[cur]);
            // cout << c << endl;

            if (mappa[c] == 1) mappa[c] = 0;
            else mappa[c] = 1;
            cur--;
        }
        
        int ans = 0;
        
        for (int i=0; i<100001; i++)
        {
            if (mappa[i]>0) ans++;
        }
        
        // cout << " ------------ " << endl;
        return ans;
        
    }
};


// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>> n;
	    string arr[n+1];
	    
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	   Solution ob;
	   cout << ob.count_tabs(arr, n) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends