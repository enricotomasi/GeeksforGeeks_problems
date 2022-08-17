//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
  public:
    string checkAdamOrNot(int N)
    {
        // code here
        string quadrato = to_string((int)pow(N,2));
        
        int rev = 0;
        int conta = log10(N);
        while (N)
        {
            int digit = N%10;
            rev+= pow(10,conta) * digit;
            conta--;
            N/=10;
        }
        
        string quadratoRev = to_string((int)pow(rev,2));
        
        int qn = quadrato.length();
        int qrn = quadratoRev.length();
        
        // cout << quadrato << " " << quadratoRev << endl;
        
        if (qn != qrn) return "NO";
        
        int j=qn-1;
        for (int i=0; i<qn; i++)
        {
            if (quadrato.at(i) != quadratoRev.at(j)) return "NO";
            j--;
        }
        
        return "YES";
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.checkAdamOrNot(N) << endl;
    }
    return 0;
}
// } Driver Code Ends