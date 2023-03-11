//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minChange(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << minChange(s) << endl;
    }
return 0;
}

// } Driver Code Ends


int minChange(string S)
{ 
     //complete the function here
     int n = S.length();
     int mappa[26] = {};
     
     for (auto c : S)
     {
         mappa[c - 'a']++;
     }
     
     int ans = 0;
     for (int i=0; i<26; i++)
     {
         // cout << " " << mappa[i] << endl;
         if (mappa[i] > 1) ans += mappa[i]-1;
     }
     
     return ans;
} 
