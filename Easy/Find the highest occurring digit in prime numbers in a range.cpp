//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    int maxDigit(int L, int R)
    {
        // code here
        bool primi[R+1];
        memset (primi, true, sizeof(primi));
        
        primi[0] = false;
        primi[1] = false;
        
        for (int i=2; i*i<=R; i++)
        {
            if (primi[i])
            {
                for (int j=i*i; j<=R; j+=i)
                {
                    primi[j] = false;
                }
            }
        }
        
        int cifre[11] = {};
        for (int i=L; i<=R; i++)
        {
            if (primi[i])
            {
                //cout << i << " ";
                int temp = i;
                while (temp)
                {
                    // cout << temp % 10 << " ";
                    cifre[temp%10]++;
                    temp /= 10;
                }
            }
        }
        
        int m = 0;
        int digit = 0;
        for (int i=0; i<=10; i++)
        {
            //cout << i << "# " << cifre[i] << endl;
            if (cifre[i] >= m)
            {
                m = cifre[i];
                digit = i;
            }
        }
        
        //cout << endl;
        if (m == 0) return -1;
        return digit;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout<<ob.maxDigit(L,R)<<endl;
    }
    return 0;
}

// } Driver Code Ends