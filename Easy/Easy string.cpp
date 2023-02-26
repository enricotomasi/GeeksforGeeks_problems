//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    }
return 0;
}


// } Driver Code Ends


string transform(string S)
{
    //complete the function here
    string ans = "";
    
    char c = '*';
    char last = '#';
    int conta = 0;

    for (char C : S)
    {
        c = tolower(C);
        
        if (c == last)
        {
            conta++;
        }
        else
        {
            if (last != '#')
            {
                ans += to_string(conta+1);
                ans += last;
                conta = 0;
            }
        }
        
        last = c;
    }
    
    ans += to_string(conta+1);
    ans += c;

    
    return ans;
}

