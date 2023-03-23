//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
    void ric(string s, vector<string>&ans, int num)
    {
         int n = s.length();
         
         if (num == n)
         {
             ans.push_back(s);
             return;
         }

         if (s[num] == '1' || s[num] == '0')
         {
             num++;
             ric(s, ans, num);
         }

         else if (s[num] == '?')
         {
             string temp = s;
             s[num] = '0';
             temp[num] = '1';
             num++;
             ric(s, ans, num);
             ric(temp, ans, num);
         }
     }


		vector<string> generate_binary_string(string s)
		{
		    // Code here
		    vector<string> ans;
		    
            ric(s, ans, 0);
            
            return ans;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string s;
	    cin >> s;
	    Solution ob;
	    vector<string> ans = ob.generate_binary_string(s);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
	return 0;
}
// } Driver Code Ends