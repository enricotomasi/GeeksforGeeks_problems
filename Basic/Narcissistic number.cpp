//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int isNarcissistic(int N)
    {
        // code here
        int cifre = log10(N) +1;
        int temp = N;

        long long numero = 0;
        while (temp)
        {
            int digit = temp%10;
            numero += pow(digit,cifre);
            temp/=10;
        }

        return numero == N;
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
        cout << ob.isNarcissistic(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends