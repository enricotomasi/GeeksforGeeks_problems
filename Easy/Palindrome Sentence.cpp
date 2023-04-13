//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    // code here
	    int n = s.length();
	    string pulita = "";
	    
	    for (int i=0; i<n; i++)
	    {
	        if (s[i] >= 'a' && s[i] <= 'z') pulita += s[i];
	    }
	    
	    int np = pulita.length();

	    string prima = pulita.substr(0, np/2);
	    
	    int cur = 0;
	    if (np %2 == 0) cur = np / 2;
        else            cur = (np / 2) + 1;
	    
	    string seconda = pulita.substr(cur);
        reverse(seconda.begin(), seconda.end());

	    return prima == seconda;
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends