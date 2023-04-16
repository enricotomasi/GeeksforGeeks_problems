//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
public:
    int numbersInRange(int L, int R)
    {
        // code here 
        int ans = 0;

        for (int i=L; i<=R; i++)
        {
            if (i < 9) ans++;
            else
            {
                string temp = to_string(i);
                if (temp[temp.length()-1] == temp[0]) ans++;
            }
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout << ob.numbersInRange(L, R) << endl;
    }
    return 0; 
} 

// } Driver Code Ends