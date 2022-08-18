//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    // Used hint:
    //
    // Binary to Gray conversion :
    //
    // The Most Significant Bit (MSB) of the gray code is always equal to the MSB of the given binary code.
    // Other bits of the output gray code can be obtained by XORing binary code bit at that
    // index and previous index.
    //
    // Gray to binary conversion :
    //
    // The Most Significant Bit (MSB) of the binary code is always equal to the MSB of the given binary number.
    // Other bits of the output binary code can be obtained by checking gray code bit at that index. 
    // If current gray code bit is 0, then copy previous binary code bit, 
    // else copy invert of previous binary code bit.
  
    public:
    string binToGrey(string B)
    {
        // code here
        int n = B.length();
        string ans = "";
        ans += B.at(0);
        
        int last = stoi(to_string(B.at(0)));
        for (int i=1; i<n; i++)
        {
            int curr = stoi(to_string(B.at(i)));
            ans += to_string(curr ^ last);
            
            last = curr;
        }
        return ans;
        
    }
    
    string greyToBin(string G)
    {
        // code here
        int n = G.length();
        string ans = "";
        ans += G.at(0);
        
        int last = stoi(to_string(G.at(0)));
        for (int i=1; i<n; i++)
        {
            int curr = stoi(to_string(G.at(i)));
            if (curr == '0')
            {
                ans += ans.at(i-1);
            }
            else
            {
                if (ans.at(i-1) == '0') ans += '1';
                else                    ans += '0';
            }
            last = curr;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string B,G;
        
        cin>>B;
        cin>>G;

        Solution ob;
        cout << ob.binToGrey(B) << endl;
        cout << ob.greyToBin(G) << endl;
    }
    return 0;
}
// } Driver Code Ends