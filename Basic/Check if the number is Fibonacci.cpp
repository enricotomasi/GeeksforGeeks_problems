 
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string checkFibonacci(int N)
    {
        // code here 
        
        int last2 = 0;
        int last1 = 1;
        int fibo = 0;
        
        while (N >= fibo)
        {
            fibo = last2 + last1;
            if (N==fibo) return "Yes";
            last2 = last1;
            last1 = fibo;
            //cout << fibo << " ";
        }
        return "No";
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkFibonacci(N) << endl;
    }
    return 0; 
}   // } Driver Code Ends