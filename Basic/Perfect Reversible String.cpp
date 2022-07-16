//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
  public:
    int isReversible(string str, int n)
    { 
         //complete the function here
         int mezzo = floor(n/2);
         n--;
         for (int i=0; i<mezzo; i++)
         {
             if (str[i] != str[n]) return false;
             n--;
         }
         
         return true;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution obj;
        cout << obj.isReversible(s, n) << endl;
    }
return 0;
}


// } Driver Code Ends