//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void follPatt(string s)
    {
       //Your code here
       int contaX = 0;
       int contaY = 0;
       
       char last = 'y';
       for (char c : s)
       {
           if (c == 'x')
           {
               if (last == 'y')
               {
                   if (contaX != contaY)
                   {
                       cout << "0" << endl;
                       return;
                   }
                   contaX = 1;
                   contaY = 0;
               }
               else contaX++;
           }
           else
           {
               contaY++;
           }
           
           last = c;
       }
       
       if (contaX == contaY) cout << "1";
       else                  cout << "0";
       
       cout<<endl;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    Solution obj;
	    //function call
	    obj.follPatt(s);
	   
	}
	return 0;
}
// } Driver Code Ends