// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
		
	int isSame(string s)
	{
	    // Your code goes here
	    string numero = "";
	    long long lunghezza = 0;
	    
	    bool inizianumero = false;
	    for (auto c: s)
	    {
	       if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
	       {
	           lunghezza++;
	       }
	       else
	       {
	           if (inizianumero) numero += c;
	           else
	           {
	               if (c!='0')
	               {
	                   inizianumero = true;
	                   numero += c;
	               }
	           }
	       }
	    }
	    
	    if (numero.length() > 10) return 0;
	    
	    long long n = stoi(numero);
	    
	    if (n == lunghezza) return 1;
	    return 0;
	    
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isSame(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends