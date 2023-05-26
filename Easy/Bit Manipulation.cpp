//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    void bitManipulation(int num, int i)
    {
        // your code here
        string binario = "";
        
        while (num)
        {
            binario = to_string(num %2) + binario;
            num /= 2;
        }
        
        binario = "0000000000000000000000000000000000" + binario;
        
        //cout << "Binario: " << binario << endl;
        
        int bn = binario.length();
        char ans1 = binario[bn-i];
        
        binario[bn-i] = '1';
        
        int ans2 = 0;
        int pot = 0;
        for (int i=bn-1; i>=0; i--)
        {
            if (binario[i] == '1') ans2 += pow(2, pot);
            pot++;
        }
        
        int ans3 = 0;
        binario[bn-i] = '0';
        pot = 0;
        for (int i=bn-1; i>=0; i--)
        {
            if (binario[i] == '1') ans3 += pow(2, pot);
            pot++;
        }

        cout << ans1 << " " << ans2 << " " << ans3;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends