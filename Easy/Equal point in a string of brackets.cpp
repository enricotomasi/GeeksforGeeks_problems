//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    int findIndex(string str)
    {
        // Your code goes here   
        int n = str.length();

        int aperte = 0;
        int chiuse = 0;
        
        for (int i=0; i<n; i++)
        {
            if (str[i] == ')') chiuse++;
        }
        
        for (int i=0; i<n; i++)
        {
            if (aperte == chiuse) return i;
            
            if (str[i] == '(') aperte++;
            else chiuse--;
        }
        
        return n;
        
        
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.findIndex(s)<<endl;
	}
}
// } Driver Code Ends