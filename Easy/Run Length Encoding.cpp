//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
    //Your code here 
    int n = src.length();
    
    string ans = "";
    
    char last = src[0];
    int conta = 1;
    
    for (int i=1; i<n; i++)
    {
        char curr = src[i];
        if (last == curr) conta++;
        else
        {
            ans += last;
            ans += to_string(conta);
            conta = 1;
        }
        last = curr;
    }
    
    if (conta >0)
    {
        ans += last;
        ans += to_string(conta);
    }
    return ans;
    
    
}     
 
