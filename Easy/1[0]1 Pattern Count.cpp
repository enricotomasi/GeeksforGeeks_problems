//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{
    public:
        int patternCount(string S) 
        { 
            //code here.
            int n = S.length();
            int last = -1;
            int ans = 0;
            
            for(int i=0; i<n; i++)
            {
                if(S[i] == '1')
                {
                    if (last != -1)
                    {
                        if (i-last > 1) ans++;
                    }
                    last = i;
                }
                else if(S[i]!='0')  last=-1;
            }
            
            return ans;  
        } 

};

//{ Driver Code Starts.
int main() 
{ 
	int t;
	cin>>t;
	while(t--){
	    string S;
    	cin>>S;
    	Solution ob;
    	cout <<ob.patternCount(S) << endl; 
	}
	return 0; 
} 

// } Driver Code Ends