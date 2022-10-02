//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    long long int get(long long int n)
    {
        //complete the function here
        
        long long int temp = 1;
        long long int i = 0;
        long long int last = 1;
        long long int lastlast = 1;
        
        while (temp<n)
        {
            lastlast = last;
            temp = (last+i);
            last = temp;
            i++;
        }
    
        if (last == n) return 1;
        
        return (n-lastlast+1);
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
        cin >> n;
        Solution ob;
        cout << ob.get(n) << endl;
    
    }
    return 0; 
} 


// } Driver Code Ends