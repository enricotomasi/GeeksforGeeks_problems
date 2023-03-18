//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPallindrome(long long int N)
    {
        // code here
        string binario = "";
        
        while (N)
        {
            if (N % 2 == 0) binario += "0";
            else             binario += "1";
            
            N /= 2;
        }

        //cout << binario << endl;
        
        int n = binario.length();
        
        string bin1 = binario.substr(0, n/2);
        string bin2 = "";
        
        if (n%2 == 0)
        {
            bin2 = binario.substr(n/2, n/2);
        }
        else
        {
            bin2 = binario.substr(((n/2)+1), n/2);
        }
        
        reverse(bin2.begin(), bin2.end());
        
        //cout << bin1 << " " << bin2 << endl;
        
        return bin1 == bin2;
        
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.isPallindrome(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends