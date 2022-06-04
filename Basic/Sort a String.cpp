 
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string sort(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << sort(s) << endl;
    }
return 0;
}



// } Driver Code Ends


string sort(string s)
{
    //complete the function here
    
    string ans = "";
    
    int mappa[256] = {};
    
    for (auto c : s)
    {
        mappa[(int)c]++;
    }
    
    
    for (int i=0; i<254; i++)
    {
        for (int j=0; j<mappa[(int)i]; j++)
        {
            ans += (char)i;
        }
        
    }
    
    
    return ans;
    
}