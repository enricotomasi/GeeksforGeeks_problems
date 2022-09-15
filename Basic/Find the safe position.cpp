//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
   	
   	int find_pos(int N)
   	{
   	    // Coder here
   	    int temp = 1;
   	    
   	    while (temp<=N)
   	    {
   	        temp*=2;
   	    }

   	    return (2*N) - temp +1;
    }    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.find_pos(N);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends