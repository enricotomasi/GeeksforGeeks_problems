//{ Driver Code Starts
# include <bits/stdc++.h>
using namespace std;
long long int findPosition(long long int k, long long int n);
int main()
{
    long long int test =0 ;
    cin>>test; 
    while(test--)
    {
        long long int n,k; 
        cin>>n; 
        cin>>k; 
        
        cout<<findPosition(k,n)<<endl; 
        
    }
}
// } Driver Code Ends


long long int findPosition(long long int A, long long int N)
{
    // Do code
    long long int a=0;
    long long int b=1;
    long long int fibo=0;
    long long int i=1;
    
    while(true)
    {
        fibo=a+b;
        a=b;
        b=fibo;
        i++;
        
        if(b%A==0) return (N*i);
    }
    
}
