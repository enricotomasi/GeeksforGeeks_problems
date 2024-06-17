//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        int findNum(int n)
        {
            //complete the function here
            int temp = 0;
            
            for (int i = 1; i <= n; i++)
            {
                int temp2 = i * 5;
                
                while (temp2 % 5 == 0)
                {
                    temp++;
                    temp2 /= 5;
                }
                
                if (temp >= n)
                {
                    return i * 5;
                }
            }
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends