//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
long long findDiff(long long n);

int main(){
    long t;
    cin>>t;
    while(t--){
        long long amount;
        cin>>amount;
        cout<<findDiff(amount)<<endl;
    }
    return 0;
}
// } Driver Code Ends


long long findDiff(long long amount)
{
    //code
    long long massimo = 0;
    int cifre = 0;
    long long am = amount;
    
    
    while(am)
    {
        int digit = am %10;
        int mul = pow(10,cifre);
        if (mul <1 ) mul = 1;
        
        if (digit != 6) massimo += digit * mul;
        else massimo += 9 * mul;

        cifre++;
        am /= 10;
    }
    
    return massimo-amount;
}