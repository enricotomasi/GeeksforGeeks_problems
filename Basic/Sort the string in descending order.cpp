// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
string ReverseSort(string str);

int main(){
    int t;
    cin >> t;
    while(t--){

        string s;
        cin >> s;
        cout << ReverseSort(s) << endl;
    }
return 0;
}
// } Driver Code Ends



string ReverseSort(string str)
{
    //complete the function here
    
    int mappa[256] = {};
    
    for (int i=0; i<str.length(); i++)
    {
       mappa[(int)str.at(i)]++;
       //cout << (int)str.at(i) << " " << mappa[(int)str.at(i)] << "-----";
    }
    
    string ans = "";
    
    for (int i=255; i>1; i--)
    {
        //cout << mappa[i] << " ";
        
        for (int j=0; j<mappa[i]; j++)
        {
            ans += (char)i; 
        }
    }
    
    
    return ans;
    
} 
