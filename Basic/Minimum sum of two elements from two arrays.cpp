//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSum(int a[], int b[], int n) 
    {
        if (n<2) return -1;
        
        int mina = INT_MAX;
        int pmina = -1;

        for (int i=0; i<n; i++)
        {
            int el = a[i];
            if (mina > el)
            {
                mina = el;
                pmina = i;
            }
        }
        
        int minb = INT_MAX;
        int pminb = -1;
        for (int i=0; i<n; i++)
        {
            int el = b[i];
            if (minb > el)
            {
                minb = el;
                pminb = i;
            }
        }

        if (pmina != pminb) return mina+minb;
        
        int min2a = INT_MAX;
        int pmin2a = -1;

        for (int i=0; i<n; i++)
        {
            int el = a[i];
            if (min2a > el && i != pmina)
            {
                min2a = el;
                pmin2a = i;
            }
        }
        
        int min2b = INT_MAX;
        int pmin2b = -1;

        for (int i=0; i<n; i++)
        {
            int el = b[i];
            if (min2b > el && i != pminb)
            {
                min2b = el;
                pmin2b = i;
            }
        }
        
        int uno = mina + min2b;
        int due = minb + min2a;
        
        return min(uno,due);
        
        
    } 
};

//{ Driver Code Starts.

// Driver code 
int main() 
{ 
    int t;
    cin >> t;
    while(t--)
    {
        int n, i;
        cin >> n;
        int a[n], b[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (i = 0; i < n; i++) {
            cin >> b[i];
        }
        Solution ob;
        cout << ob.minSum(a, b, n) <<endl;

    }
	return 0; 
} 

// } Driver Code Ends