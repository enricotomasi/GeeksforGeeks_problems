
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        int somma = 0;
        int maxSomma = 0; 
        int conta = 0;
        
        for(int i = 0; i<n; i++)
        {
            if(a[i] == 1)
            {
                somma--;
                conta++;
            }
            else somma++;
            maxSomma = max(maxSomma, somma);
            if(somma < 0) somma = 0;
        }
        
        return maxSomma + conta;
        

    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends