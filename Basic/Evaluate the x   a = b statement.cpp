//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
   	int Evaluate(string str)
   	{
   	    // Code here
   	    int n = str.length();

   	    string strA = "";
   	    string strB = "";
   
        int stadio = 0;
   	    for (int i=0; i<n; i++)
   	    {
   	        char c = str[i];
   	        if (stadio == 0)
   	        {
   	            if (c=='+') stadio = 1;
   	        }
   	        else if (stadio ==1 )
   	        {
   	            if (c == '=') stadio = 2;
   	            else
   	            {
   	                if (c != ' ') strA += c;
   	            }
   	        }
   	        else
   	        {
   	            if (c != ' ') strB += c;
   	        }
   	    }
   	    
   	    int a = stoi(strA);
   	    int b = stoi(strB);
   	    
        int x = b-a;
        
        return x;
   	    
    }    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	while(tc--){
		string str;
		getline(cin, str);
		Solution ob;
		int ans = ob.Evaluate(str);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends