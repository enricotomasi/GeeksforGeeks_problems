//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
public:	
	string addBinary(string A, string B)
	{
	    // your code here
        int na = A.length() - 1;
        int nb = B.length() - 1;
        
        int carry = 0;
	    string ans = "";
        
        while (na >= 0 || nb >= 0 || carry > 0)
        {
            int first = 0;
            int second = 0;
            
            if (na >= 0)
            {
                first = A[na] - '0';
                na--;
            }
            
            if (nb >= 0)
            {
                second = B[nb] - '0';
                nb--;
            }
            
            int tot = first + second + carry;
            
            if (tot == 0)
            {
                ans.push_back('0');
                carry=0;
            }
            else if (tot == 1) 
            {
                ans.push_back('1');
                carry = 0;
            }
            else if (tot == 2)
            {
                ans.push_back('0');
                carry = 1;
            }
            else
            {
                ans.push_back('1');
                carry = 1;
            }
        }
        
        while (ans.back() == '0' && ans.size() > 1)
        {
            ans.pop_back();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
	    
	    
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
