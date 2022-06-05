 
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}// } Driver Code Ends



string transform(string s){
    // code here
    bool maiuscola=true;
    string ans = "";
    for (int i=0; i<s.length(); i++) {
        int c = s.at(i);
        if (maiuscola) {
            maiuscola = false;
            c-=32;
        }
        ans += (char)c;
        if (c == 32) maiuscola = true;
    }
    return ans;
}