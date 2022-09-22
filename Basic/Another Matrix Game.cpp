//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string matrixGame(string S)
    {
        // code here

       string ans="";
       int n=sqrt(S.length());
       
       char m[n][n];
       
       int temp=0;
       
       for(int i=0 ; i<n ; i++)
       {
           for(int j=0 ; j<n ; j++)
           {
               m[i][j]=S[temp]; 
               temp++;
           }
       }
       
       for(int i=0 ; i<n ; i++)
       {
           int mappa[26]={0};
           string s="";
           
           for(int j=0 ; j<n ; j++) mappa[m[j][i]-'a']++;
               
           for(int j=0 ; j<n ; j++)
           {
               if(mappa[m[j][i]-'a']==1) s+=m[j][i];
           }
           
           if(s.length()%2)
           {
               for(int j=0 ; j<s.length()/2; j++)
               {
                   ans+=s[j];
                   ans+=s[s.length()-j-1];
               }
               ans+=s[s.length()/2];
           }
           else
           {
               for(int j=0 ; j<s.length()/2 ; j++)
               {
                   ans+=s[j];
                   ans+=s[s.length()-j-1];
               }
           }
           
       }
       
       if (ans=="") return "0";
       return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;

        Solution ob;
        cout<<ob.matrixGame(S)<<endl;
    }
    return 0;
}
// } Driver Code Ends