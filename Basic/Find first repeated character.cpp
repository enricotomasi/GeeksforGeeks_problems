// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    int n = s.length();
    
    int mappa[256] = {};
    
    
    for (int i=0; i<n; i++)
    {
        char c = s.at(i);
        int nc = int(c);
        
        if (mappa[nc] > 0)
        {
            string ans = "";
            ans +=c;
            return ans;
        }

        mappa[(int)s.at(i)]++;
    }
    
    return "-1";
} 
