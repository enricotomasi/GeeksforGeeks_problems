//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int solve(string s);
int main()
{
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        string s;
        cin>>s;
        cout<<solve(s)<<endl;
        
    }
}
// } Driver Code Ends



int solve(string N)
{
    //code here
    int count = -1;
    int digits[10] = {};
    int ans = -1;
    
    for (int i = 0; i < N.length(); i++)
    {
        int digit = N[i] - '0';
        
        digits[digit]++;
        
        if (count == digits[digit])
        {
            if (digit > ans)
            {
                ans = digit;
            }
        }
        else if (count < digits[digit])
        {
            count = digits[digit];
            ans = digit;
        }
        
    }
    
    return ans;
}
