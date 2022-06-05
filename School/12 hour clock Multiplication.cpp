 
// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int mulClock(int num1, int num2) {
        // code here
        int somma = num1*num2;
        int clo = (somma % 12);
        
        if (clo == 12) clo = 0;
        if (clo > 12) clo-=12;
        
        return clo;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int num1,num2;
        
        cin>>num1>>num2;

        Solution ob;
        cout << ob.mulClock(num1,num2) << endl;
    }
    return 0;
}  // } Driver Code Ends