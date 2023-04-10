//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    string calc_Sum(int *a, int n, int *b, int m)
    {
        // Complete the function
        string ans = "";
        
        n--;
        m--;
        
        int d1 = 0;
        int d2 = 0;
        int resto = 0;
        
        while (n >= 0 || m >= 0)
        {
            if (n < 0) d1 = 0;
            else       d1 = a[n];
            
            if (m < 0) d2 = 0;
            else       d2 = b[m];
            
            int somma = d1 + d2 + resto;
            resto = somma / 10;
            
            n--;
            m--;
            
            ans.append(to_string(somma % 10));
        }
    
        if (resto > 0) ans.append(to_string(resto));
    
        reverse(ans.begin(), ans.end());
    
        int pos = 0;
        while (ans[pos] == '0') pos++;
        
        ans = ans.substr(pos);
    
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int m;
	    cin>>m;
	    int b[m];
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	    }
	    Solution ob;
	    cout << ob.calc_Sum(a,n,b,m) << endl;
	}
	return 0;
}
// } Driver Code Ends