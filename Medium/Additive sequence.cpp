//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution 
{
  public:
    bool isAdditiveSequence(string n)
    {
        int nn = n.length();
        int first = 0;
        
        for (int i = 0; i < nn / 2; i++)
        {
            first = first * 10 + (n[i] - '0');
            int second = 0;
            
            for (int j = i + 1; j < nn - 1; j++)
            {
                second = second * 10 + (n[j] - '0');
                
                int temp1 = second;
                int temp2 = first; 
                
                int num = 0;
                int k = j + 1;
                
                while(k < nn)
                {
                    num = num * 10 + (n[k] - '0');
                    
                    if (num == (temp1 + temp2))
                    {
                        temp2 = temp1;
                        temp1 = num;
                        num = 0;
                    }
                    
                    k++;
                }
                
                if (k == nn && num == 0)
                {
                    return true;
                }
            }
       }
       
       return false;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    Solution sol;

    while (t--) {
        string s;
        cin >> s;

        bool result = sol.isAdditiveSequence(s);
        cout << result << endl;
    }

    return 0;
}

// } Driver Code Ends
