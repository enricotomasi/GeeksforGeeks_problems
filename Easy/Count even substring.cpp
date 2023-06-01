//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long evenNumSubstring(string str);

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << evenNumSubstring(s) << endl;
    }
return 0;
}





// } Driver Code Ends


long long evenNumSubstring(string S)
{
    //complete the function here
    int n = S.length();
    long long ans = 0;
    
    for (int i=0; i<n; i++)
    {
        int temp = S[i] - '0';
        if (temp % 2 == 0)
        {
            ans += i;
            ans++;
        }
    }
    
    return ans;
    
}