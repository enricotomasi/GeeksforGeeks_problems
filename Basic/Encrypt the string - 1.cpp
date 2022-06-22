// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    string encryptString(string s)
    {
        // code here
        string prima = "";
        char last = s.at(0);
        int contatemp = 1;
        
        for (int i=1; i<s.length(); i++)
        {
            if (s.at(i) != last)
            {
                prima += last + std::to_string(contatemp);
                last = s.at(i);
                contatemp = 1;
            }
            else
            {
                contatemp++;
            }
        }
        
        if (contatemp !=0)
        {
            prima += last + std::to_string(contatemp); 
        }
        
        string ans = "";
        
        for (int i=prima.length()-1; i>=0; i--)
        {
            ans += prima.at(i);
        }
        
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
	    string s;
		cin>>s;
		Solution ob;
		string ans = ob.encryptString(s);
		cout<<ans<<endl;
	}
}
  // } Driver Code Ends