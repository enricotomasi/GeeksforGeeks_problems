//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

/*Function to count number of characters 
* to make s1 and s2 equal
* s1 : first string
* s2 : second string
*/
class Solution
{
    public:
    int countChars(string s1, string s2)
    {
        // Your code here
        int mappa1[26] = {};
        int mappa2[26] = {};
        
        for (auto it : s1) mappa1[it - 'a']++;
        for (auto it : s2) mappa2[it - 'a']++;
        
        int ans = 0;
        
        for (int i=0; i<26; i++)
        {
            ans += abs(mappa1[i] - mappa2[i]);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    
	    // taking string input
	    string s1, s2;
	    cin >> s1 >> s2;
	    Solution obj;
	    cout << obj.countChars(s1, s2) << endl;
	}
	
	return 0;
}
// } Driver Code Ends