//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution
{
  public:
    string BalancedString(int N)
    {
        // code here
        string ans = "";    
        
        int sommacifre = 0;
        int temp = N;
        while (temp)
        {
            sommacifre += temp%10;
            temp /= 10;
        }
        
        while (N)
        {
            if (N>26)
            {
                //cout << "superiore a 26: " << N << endl;
                for (int i=0; i<26; i++) ans += 'a' +i;
                N -= 26;
                //cout << ans << endl;
            }
            else
            {
                if (N%2 == 0) // pari
                {
                    //cout << "pari: " << N << endl;
                    for (int i=0; i<N/2; i++) ans += 'a' +i;
                    for (int i=0; i<N/2; i++) ans += 'z' -(N/2) +i +1;
                    N = 0;
                    //cout << ans << endl;
                }
                else // dispari
                {
                    //cout << "dispari: " << N << endl;
                    if (sommacifre %2 == 0) // sommacifre pari
                    {
                        //cout << "sommacifre pari: " << sommacifre << endl;
                        for (int i=0; i<(N+1)/2; i++) ans += 'a' +i;
                        for (int i=0; i<(N-1)/2; i++) ans += 'z' -((N-1)/2) +i +1;
                        N = 0;
                        //cout << ans << endl;
                    }
                    else // sommacifre dispari
                    {
                        //cout << "sommacifre dispari: " << sommacifre << endl;
                        for (int i=0; i<(N-1)/2; i++) ans += 'a' +i;
                        for (int i=0; i<(N+1)/2; i++) ans += 'z' -((N+1)/2) +i +1;
                        N = 0;
                        //cout << ans << endl;
                    }
                }
            }  
            
        }
        
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
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends