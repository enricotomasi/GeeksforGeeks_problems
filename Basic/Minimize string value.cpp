4444444// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int minValue(string S, int K)
	{
	    // Your code goes here
        unordered_map<char, int> mappa;
        
        for (auto c : S)
        {
            mappa[(int)c]++;
        }
        
        vector<int> mappav;
        for (auto i : mappa)
        {
            mappav.push_back(i.second);
        }
        
        sort(mappav.begin(), mappav.end());
        reverse(mappav.begin(), mappav.end());
        
        while (K > 0)
        {
            mappav[0]-=1;
            K--;
            sort(mappav.begin(), mappav.end());
            reverse(mappav.begin(), mappav.end());
        }
        
        int ans = 0;
        
        for (auto i : mappav)
        {
            if (i>0) ans += pow(i,2);
        }
        
	    return ans;
	    
	}
};

// { Driver Code Starts.

int main() 
{
   
   
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		int k;
   		cin >> k;
        Solution ob;

   		cout << ob.minValue(s, k);

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends