//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
		// Your code goes here
		int n = s.size();
		vector<int> v1;
		vector<int> v2;
		
		for (int i=0; i<n; i++)
		{
		    if      (s[i] == word1) v1.push_back(i);
		    else if (s[i] == word2) v2.push_back(i);
		}
		
		int n1 = v1.size();
		int n2 = v2.size();
		
		int ans = INT_MAX;
		
		for (int i=0; i<n1; i++)
		{
		    for (int j=0; j<n2; j++)
		    {
		        int diff = abs(v2[j] - v1[i]);
		        ans = min(ans, diff);
		    }
		}
		
		if (ans == INT_MAX) return 0;
		
		return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;

   		vector<string> s(n);
   		for(int i = 0; i < n; i++)
   			cin >> s[i];

   		string word1, word2;

   		cin >> word1 >> word2;
   		
   		Solution ob;

   		cout << ob.shortestDistance(s, word1, word2) << "\n";
   	}

    return 0;
}
// } Driver Code Ends