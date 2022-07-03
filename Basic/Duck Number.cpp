// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 
bool check_duck(string N);
 
int main(void)
{
    int t; 
    cin>>t;
    while(t--)
    {
        string N; 
        cin>>N; 
  
        if (check_duck(N)) 
            cout << "YES\n"; 
        else
            cout << "NO\n"; 
     
    }
}// } Driver Code Ends


bool check_duck(string N)
{
    //code
    
    int zeri = 0;
    int altri = 0;
    
    for (char c : N)
    {
        if (c == '0')
        {
            if (altri > 0) zeri++;
        }
        else altri ++;
    }

    if (zeri >0 && altri > 0) return true;
    
    return false;
    
}