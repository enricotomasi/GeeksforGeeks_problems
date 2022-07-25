//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
	public:
   	int corner_digitSum(int n)
   	{
   	    // Code here
   	    
   	    int prima = 0;
   	    int ultima = 0;
   	    bool primaFatta = false;
   	    
   	    while (n)
   	    {
   	        int digit = n%10;
   	        if (!primaFatta)
   	        {
   	            primaFatta = true;
   	            ultima = digit;
   	        }
   	        else
   	        {
   	            prima = digit;
   	        }
   	        
   	        n/=10;
   	    }
   	    
   	    //cout << prima << " -- " << ultima << endl;
   	    
   	    return prima + ultima;
   	    
   	    
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.corner_digitSum(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends