//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    long long int findMaxOddSubarraySum(long long int arr[], long long int n)
    {
        //code here.
        long long int sommapos = 0;
        long long int piccolo = INT_MAX;
        
        for (int i=0; i<n; i++)
        {
            if (arr[i] > 0) sommapos += arr[i];
            if (arr[i] %2 != 0) piccolo = min(piccolo, abs(arr[i]));
        }
        
        
        if (piccolo == INT_MAX) return -1;
        if (sommapos <=0 && piccolo == 0) return -1;
        if (sommapos %2 != 0) return sommapos;
        return sommapos - piccolo;

    }
 
};

//{ Driver Code Starts.


int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;    
        cout <<ob.findMaxOddSubarraySum(arr, n);
        cout<<endl;
    }

    
    return 0;
}
// } Driver Code Ends