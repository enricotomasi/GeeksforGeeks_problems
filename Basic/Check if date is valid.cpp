//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int isValidDate(int d, int m, int y)
    {
        // code here
        if (d<1 || d > 31) return false;
        if (m<1 || m > 12) return false;
        if (y<1800 || y> 9999) return false;
        
        //               01  02  03  04  05  06  07  08  09  10  11  12
        int giorni[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        
        if (d>giorni[m-1]) return false;
        
        if (m == 2 && d == 29)
        {
            if (!(y%400==0 || (y%4==00 && ! (y%100==0)))) return false;
        }
        
        
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int d,m,y;
        
        cin>>d>>m>>y;

        Solution ob;
        cout << ob.isValidDate(d,m,y) << endl;
    }
    return 0;
}
// } Driver Code Ends