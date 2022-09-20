//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution
{
   public:
    string ReFormatString(string S, int K)
    {
    	int N = S.length();
    	string s = "";
    	
    	for (int i=0; i<N; i++)
    	{
    	    if (S[i] != '-') s+=toupper(S[i]);
    	}
    	
    	if (s=="") return "";
    	
    	int n = s.length();
    	int first = n%K;
    	if (first == 0) first = K;
    	int i=0; 
    	
    	string ans = "";
    	for (i=0; i<first; i++)
    	{
    	    ans += s[i];
    	}
    	
    	if (i>n-1) return ans;
    	
    	ans += '-';

    	int k = K;
    	for (; i<n; i++)
    	{
    	    ans += s[i];
    	    k--;
    	    if (k<=0 && i < n-1)
    	    {
    	        ans += '-';
    	        k=K;
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
	    string S;
	    cin>>S;
	    int K;
	    cin >> K;
	    Solution ob;  
	    string ans=ob.ReFormatString(S, K);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends