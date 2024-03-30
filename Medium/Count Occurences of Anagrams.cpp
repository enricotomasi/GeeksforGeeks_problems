//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++

/*
    We can achieve O(n) time complexity under the assumption that alphabet size is fixed which is typically true as we have 
    maximum 256 possible characters in ASCII. The idea is to use two count arrays:
    
    1) The first count array store frequencies of characters in pattern.
    2) The second count array stores frequencies of characters in current window of text.
    
    The important thing to note is, time complexity to compare two count arrays is O(1) as the number of elements in them are fixed 
    (independent of pattern and text sizes). Following are steps of this algorithm.
    1) Store counts of frequencies of pattern in first count array countP[]. 
    Also store counts of frequencies of characters in first window of text in array countTW[].
    
    2) Now run a loop from i = M to N-1. Do following in loop.
    …..a) If the two count arrays are identical, we found an occurrence.
    …..b) Increment count of current character of text in countTW[]
    …..c) Decrement count of first character in previous window in countWT[]
    
    3) The last window is not checked by above loop, so explicitly check it.
*/

class Solution
{
public:
	bool check(vector<int> a, vector<int> b)
	{
	    for (int i = 0; i < 26; i++)
	    {
	        if (a[i] != b[i])
	        {
	            return false;
	        }
	    }
	    
	    return true;
	}
	
	
	int search(string pat, string txt)
	{
	    // code here
	    int np = pat.size();
	    int nt = txt.size();
	    
	    if (np > nt)
	    {
	        return -1;
	    }
	    
	    vector<int> map_pat(26);
	    
	    for (auto c : pat)
	    {
	        map_pat[c - 'a']++;
	    }
	    
	    //cout << "map_pat: ";
	    //for (auto it : map_pat) cout << it << " ";
	    //cout << endl;
	    
	    vector<int> map_txt(26);
	    
	    for (int i = 0; i < np; i++)
	    {
	        map_txt[txt[i] - 'a']++;
	    }
	    
	    int ans = 0;
	    
	    for (int i = np; i < nt; i++)
	    {
	        if (check(map_pat, map_txt))
	        {
	            ans++;
	        }
	        
	        map_txt[txt[i] - 'a']++;
	        map_txt[txt[i - np] - 'a']--;
	        
	        //cout << i << " " << (i - np + 1) << endl;
	        
	    }
	    
	    if (check(map_pat, map_txt))
	    {
	        ans++;
	    }
	    
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends