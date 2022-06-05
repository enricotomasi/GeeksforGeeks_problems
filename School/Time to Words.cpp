 
// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string timeToWord(int H, int M){
        // code here
        
        string numeri[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
            "ten", "eleven", "twelve", "thirteen", "fourteen", "fiveteen", "sixteen", "seventeen",
            "eighteen", "nineteen" };

        string ora = numeri[H-1];
        
        string oraSuccessiva = "";
        if (H<12) oraSuccessiva = numeri[H];
        else oraSuccessiva = numeri[0];

        int min = 0;
        if (M > 30) min = 60-M;
        else min = M;

        string minuti = "";
        if (min == 0) minuti = "----";
        else if (min <20) minuti = numeri[min-1];
        else if (min == 20) minuti = "twenty";
        else minuti = "twenty " + numeri[min-21];

        string ans = "";
        if (M == 0) ans = ora + " o' clock";
        else if (M == 15) ans = "quarter past " + ora;
        else if (M == 30) ans = "half past " + ora;
        else if (M == 45) ans = "quarter to " + oraSuccessiva;
        else if (M == 1)  ans = numeri[0] + " minute past " + ora; 
        else if (M == 59) ans = numeri[0] + " minute to " + oraSuccessiva;
        else if (M == 60) ans = "zero minutes to " + oraSuccessiva;
        else if (M < 30) ans = minuti + " minutes past " + ora;
        else ans = minuti + " minutes to " + oraSuccessiva;
        
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  H, M;
        cin >> H >> M;
        Solution ob;
        cout<<ob.timeToWord(H,M)<<endl;
    }
    return 0;
}
  // } Driver Code Ends