//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution
{   
  public:
    int rightmostNonZeroDigit(int N, int A[])
    {
        // code here 
        int ans =1;
        int due = 0;
        int cinque = 0;
        
        for (int i=0; i<N; i++)
        {
            if(A[i] == 0) return -1;
            
            while(A[i] %2 == 0)
            {
                due++;
                A[i] /= 2;
                
            }
            while(A[i]%5==0)
            {
                cinque++;
                A[i] /= 5;
            }
            
            ans = (ans * A[i]) %10;
        }
        
        int y = min(due, cinque);
        due -= y;
        cinque -= y;
        
        for (int i=0; i<due; i++)
        {
            ans= (ans*2)%10;
            
        }
        
        for (int i=0; i<cinque; i++)
        {
            ans = (ans*5)%10;
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
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        Solution ob;
        cout << ob.rightmostNonZeroDigit(n, A) << endl;
    }
    return 0; 
} 
// } Driver Code Ends