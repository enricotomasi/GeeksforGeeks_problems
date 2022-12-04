//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    bool areKAnagrams(string str1, string str2, int k)
    {
        // code here
        int n1 = str1.length();
        int n2 = str2.length();
        
        if (n1 != n2) return false;
        
        int n = n1;
        
        int mappa1[26] = {};
        int mappa2[26] = {};
        
        for (int i=0; i<n; i++)
        {
            mappa1[str1[i] - 'a']++;
        }
        
        for (int i=0; i<n; i++)
        {
            mappa2[str2[i] - 'a']++;
        }
        
        int diff = 0;
        
        for (int i=0; i<26; i++)
        {
            int d = abs(mappa1[i] - mappa2[i]);
            diff += d;
        }

        float diff2 = diff/2;
        
        return diff2 <= (float)k;
        
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}
// } Driver Code Ends