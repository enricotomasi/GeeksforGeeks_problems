 
// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    long long int convertEvenBitToZero(long long int n)
    {
        // code here
        
        string ns = bitset<32>(n).to_string();
        
        //cout << ns << "---";
        
        string nsn = "";

        bool iniziato = false;
        for (int i=0; i<ns.length(); i++)
        {
            if (iniziato)
            {
                nsn += ns.at(i);
            }
            else
            {
                if (ns.at(i) != '0')
                {
                    iniziato = true;
                    nsn += ns.at(i);
                }
            }
        }
        
        //cout << "---" << nsn << "-----";
        
        string nsnr = "";
        
        bool pari = true;
        if (nsn.length()%2 == 0) pari = false;
        else pari = true;
        
        for (int i=0; i<nsn.length(); i++)
        {
            if (pari) nsnr += '0';
            else nsnr += nsn.at(i);
            pari = !pari;
        }
        
        // cout << "---" << nsnr << "----*";
        
        int ans = stoi(nsnr,0,2);
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.convertEvenBitToZero(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends