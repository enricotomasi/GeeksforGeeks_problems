//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long minNumber(long long arr[],long long N);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    cout << minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends

bool primo(int n)
{

    if (n==1) return false;
    if (n==2) return true;
    
    for (int i=2; i<sqrt(n)+1; i++)
    {
        if (n%i==0) return false;
    }
    
    return true;
}

long long minNumber(long long arr[],long long N)
{
    long long somma = 0;
    
    for (int i=0; i<N; i++)
    {
        somma +=arr[i];
    }
    
    if (primo(somma)) return 0;
    
    long long primoAvanti = somma;
    while (primoAvanti)
    {
        primoAvanti++;
        if (primo(primoAvanti))
        {
            break;
        }
    }

    return abs(somma-primoAvanti);
  
}
