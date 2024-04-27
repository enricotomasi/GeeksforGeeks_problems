//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<char> low;
        vector<char> up;
        
        for (auto c : str)
        {
            if (c >= 'A' && c <= 'Z')
            {
                up.push_back(c);
            }
            else
            {
                low .push_back(c);
            }
        }
        
        sort(low.begin(), low.end());
        sort(up.begin(), up.end());
        
        //for (auto c : low) cout << c << " ";
        //cout << endl;
        //for (auto c : up)  cout << c << " ";
        //cout << endl;
        
        string ans = "";
        
        int nl = 0;
        int nu = 0;
        
        for (auto c : str)
        {
            if (c >= 'A' && c <= 'Z')
            {
                ans += up[nu];
                nu++;
            }
            else
            {
                ans += low[nl];
                nl++;
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
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends