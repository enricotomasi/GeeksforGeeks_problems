//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int sumOfDigits(int N)
    {
        //code here
        int ans = 0;
        for (int i=1; i<=N; i++)
        {
            int temp = i;
            while (temp)
            {
                int digit = temp%10;
                ans += digit;
                temp/=10;
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
        int N;
        cin>>N;
        Solution ob;
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends