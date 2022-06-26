// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    string makeEven(string s)
    {
        //code here.
        
        int n = s.length();
        
        if (n<=1) return s;
        
        int ultimo = n-1;
        
        for (int i=0; i<n; i++)
        {
            if (s.at(i) %2 == 0 && s.at(i) < s.at(n-1))
            {
                swap(s[i], s[n-1]);
                return s;
            }
            else if (s.at(i)%2==0) ultimo = i;
        }
        
        swap(s[ultimo],s[n-1]);
        return s;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    Solution ob;
	    cout<<ob.makeEven(str)<<endl;
	}
	return 0;
}
  // } Driver Code Ends