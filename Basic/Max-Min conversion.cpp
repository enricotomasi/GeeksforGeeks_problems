//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long performOperation(long long n);
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<performOperation(n)<<endl;
    }
}
// } Driver Code Ends


long long performOperation(long long n)
{
    //code here.
    long long massimo = 0;
    long long minimo = 0;
    
    long long temp = n;
    long long i = 0;
    
    while (temp)
    {
        long long digit = temp%10;
        
        if (digit == 5 || digit == 6)
        {
            massimo += 6 * (long long)pow(10,i);
            minimo  += 5 * (long long)pow(10,i);
        }
        else
        {
            massimo += digit * (long long)pow(10,i);
            minimo  += digit * (long long)pow(10,i);
        }
        
        //cout << digit << " " << massimo << " " << minimo << " " << (pow(10,i)) << endl;
        
        i++;
        temp/=10;
    }
    
    long ans = massimo+minimo;
    
    return ans;
    
    
    
}
