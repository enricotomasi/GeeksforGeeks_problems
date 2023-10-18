//{ Driver Code Starts



#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		long int unique_substring_sum(string s, int k)
		{
		    // Code here
		    int n = s.size();
		    
		    if (n % k != 0) return -1;
            
            set<string> mappa;

            for (int i = 0; i < n; i += k)
            {
                mappa.insert(s.substr(i, k));
            }
            
            long int ans = 0;
            
            for (auto i: mappa)
            {
                long int p = i.size() - 1;
                long int somma = 0;
                long int q = 0;
                
                while (p >= 0)
                {
                    if (i[p] == '1') somma += pow(2, q);
                    q++;
                    p--;
                }
            
                ans += somma;
            } 
            
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
    	int k;
    	cin >> s >> k;
        Solution ob;
    	long int ans  = ob.unique_substring_sum(s, k);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends