//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

struct alphanumeric
{
    string name;
    int count;
};

class Solution 
{
  public:
    vector<alphanumeric> sortedStrings(int N, vector<string> A) 
    {
        // code here
        vector<alphanumeric> ans;
       
        sort(A.begin(), A.end());
        
        int conta = 0;
        string temp = "";
        
        for (auto it : A)
        {
            //cout << it << endl;
            
            if (conta > 0)
            {
                if (temp == it)
                {
                    conta++;
                }
                else
                {
                    alphanumeric item;
                    item.name = temp;
                    item.count = conta;
                    
                    ans.push_back(item);
                    temp = it;
                    conta = 1;
                }
            }
            else // conta == 0
            {
                temp = it;
                conta = 1;
            } 
        }
        
        if (conta > 0)
        {
            alphanumeric item;
            item.name = temp;
            item.count = conta;
                    
            ans.push_back(item);
        }
        
        
        //cout << endl << " --------------------------------- " << endl;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        cin.ignore();
        vector<string> v;
        for (int i = 0; i < N; i++) {
            string s;
            getline(cin, s);
            v.push_back(s);
        }
        Solution ob;
        vector<alphanumeric> ans = ob.sortedStrings(N, v);
        for (auto u : ans) cout << u.name << " " << u.count << "\n";
    }
}
// } Driver Code Ends