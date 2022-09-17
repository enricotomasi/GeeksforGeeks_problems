//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
  public:
    string minimumLuckyNumber(int N)
    {
        // code here
        
        // Hint 1:
        // Find out the minimal number of fours such that after taking
        // out the fours the rest of the number is divisible by 7.
        
        // Hint 2:
        // There can at most floor(N/4) number of 4s in the number.
        
        long long four = 0;
        long long seven = 0;
        
        long long sum = 0;
        
        long long temp = N;
        while (temp)
        {
            if (temp%7==0) break;
            
            four++;
            temp-=4;
            sum +=4;
        }
        
        if (temp <0) return "-1";
        
        //cout << sum << endl;
        
        seven = ((N-sum)/7);
        //cout << "four: " << four << " seven:" << seven << endl;
        
        string ans = "";
        for (int i=0; i<four; i++)  ans += '4';
        for (int i=0; i<seven; i++) ans += '7';
        
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
        Solution ob;
        cout << ob.minimumLuckyNumber(N) << "\n";
    }
}

// } Driver Code Ends