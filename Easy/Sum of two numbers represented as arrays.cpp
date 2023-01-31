//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<int> findSum(vector<int> &a, vector<int> &b)
	{
	    // code here
	    int na = a.size() - 1;
	    int nb = b.size() - 1;
	    
	    stack<int> somma;
	    
	    int resto = 0;
	    while (na >= 0 || nb >=0)
	    {
	        int cifra = resto;
	        if (na >=0) cifra += a[na];
	        if (nb >=0) cifra += b[nb];
	        
	        if (cifra > 9)
	        {
	            somma.push(cifra%10);
	            cifra /=10;
	            resto = cifra%10;
	        }
	        else
	        {
	            somma.push(cifra);
	            resto = 0;
	        }
	        na--;
	        nb--;
	    }
	    
	    if (resto > 0)
	    {
	        somma.push(1);
	    }
	    
	    
	    vector<int> ans;
	    while (!somma.empty())
	    {
	        ans.push_back(somma.top());
	        somma.pop();
	    }
	    
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        Solution ob;
        auto ans = ob.findSum(a, b);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends