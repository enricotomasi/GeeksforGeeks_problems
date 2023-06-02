//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    int convertToEven(string s)
    {
        // Your code goes here
        int ans = 0;
        int temp = 0;
        for (auto it : s)
        {
            if (it == 'O') temp++;
            else
            {
                if (temp != 0)
                {
                    ans++;
                    temp = 0;
                }
            }
        }
        
        if (temp != 0) ans++;

        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
        Solution ob;
   		cout << ob.convertToEven(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends