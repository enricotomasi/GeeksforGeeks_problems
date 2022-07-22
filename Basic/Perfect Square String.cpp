//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int isSquare(string S);

int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        cout << isSquare(S) << endl;
    }
return 0;
}
// } Driver Code Ends


int isSquare(string S)
{
    //complete the function here
    long long somma = 0;
    
    for (char c : S)
    {
        somma += c;
    }
    
    if (sqrt(somma) != (int)sqrt(somma)) return 0;
    
    return 1;
    
    
    
}