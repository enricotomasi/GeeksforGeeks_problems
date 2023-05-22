//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
   	string minimum_Number(string s)
   	{
   	    // Code here
   	    int n = s.length();
   	    sort (s.begin(), s.end());
   	    
   	    while (s[0] == '0')
   	    {
   	        int i = 1;
   	        while (s[i] == '0') i++;
   	        
   	        //cout << i << endl;
   	        
   	        if (i >= n) break;
   	        
   	        s[0] = s[i];
   	        s[i] = '0';
   	    }
   	    

   	    
   	    return s;
   	    
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		string ans = ob.minimum_Number(s);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends