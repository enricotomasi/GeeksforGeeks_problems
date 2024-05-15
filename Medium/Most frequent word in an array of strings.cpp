//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
    public:
    //Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n) 
    {
        // code here
        unordered_map<string, pair<int, int>> m;
        
        for (int i = 0; i < n; i++)
        {
            string w = arr[i];
            
            if (m.find(w) == m.end())
            {
                pair<int, int> p = {1, i};
                m[w] = p;
            }
            else
            {
                pair<int, int> p = { m[w].first + 1, m[w].second };
                m[w] = p;
            }
            
        }
        
        //for (auto it : m) cout << it.first << " # n: " << it.second.first << "  pos: " << it.second.second << endl;
        
        string ans = "";
        int mn = -1;
        int mpos = -1;
        
        for (auto it : m)
        {
            if (it.second.first > mn || (it.second.first == mn && it.second.second > mpos))
            {
                ans = it.first;
                mn = it.second.first;
                mpos = it.second.second;
            }
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.mostFrequentWord(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
