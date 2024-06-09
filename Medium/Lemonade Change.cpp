//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    bool lemonadeChange(int N, vector<int> &bills) 
    {
        // code here
        int five = 0;
        int ten = 0;
        int twenty = 0;
        
        for (auto it : bills)
        {
            //cout << endl;
            //cout << "it: " << it << " five: " << five << " ten: " << ten << " twenty: " << twenty << endl; 
            
            if (it == 5)
            {
                //cout << "five" << endl;
                five++;
            }
            else if (it == 10)
            {
                //cout << "ten " << endl;
                if (five >= 1)
                {
                    //cout << "five >= 1" << endl;
                    five--;
                }
                else
                {
                    //cout << "else" << endl;
                    return false;
                }
                
                ten++;
            }
            else // it = 20
            {
                //cout << "twenty" << endl;
                if (ten >= 1 && five >= 1)
                {
                    //cout << "ten >= 1 && five >= 1" << endl;
                    ten--;
                    five--;
                }
                else if (five >= 3)
                {
                    //cout << "five >= 3" << endl;
                    five -= 3;
                }
                else
                {
                    //cout << "else" << endl;
                    return false;
                }
                
                twenty++;
            }
            
            //cout << "      five: " << five << " ten: " << ten << " twenty: " << twenty << endl;
            //cout << endl;
            
        }

        return true;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends