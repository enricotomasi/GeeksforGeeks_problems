//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Returns an array of all n-bit gray codes sequence.
You are required to complete below method. */
class Solution
{
  public:
    vector <string> generateCode(int N)
    {
         //Your code here
         vector<string> temp = {"0", "1"};
         if (N == 1) return temp;
         
         vector<string> ans;
         
         for (int i = 1; i<N; i++)
         {
            ans = temp;
            
            for (int i=0; i<ans.size(); i++)
            {
                ans[i] = '0' + ans[i];
            }
            
            reverse(temp.begin(), temp.end());
         
            for (int i=0; i<temp.size(); i++)
            {
                temp[i] = '1' + temp[i];
            }
         
            for (auto it : temp) ans.push_back(it);
             
            temp = ans;
         }
         
         
         return ans;
         
    
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution obj;
		vector <string> res = obj.generateCode(n);
		for (string i : res) cout << i << " ";
        cout<<endl;
	}
	return 0;
}


// } Driver Code Ends