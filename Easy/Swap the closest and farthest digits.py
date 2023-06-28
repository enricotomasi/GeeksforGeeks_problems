//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        void swapDigits(string &N1, string &N2)
        {
        	//code here.
        	int n1 = N1.size();
        	int n2 = N2.size();
        	
        	int temp = N1[0];
        	N1[0] = N2[n2-1];
        	N2[n2-1] = temp;
        	
        	temp = N1[n1-1];
        	N1[n1-1] = N2[0];
        	N2[0] = temp;
        	
        	
        }
};

//{ Driver Code Starts.


int main() 
{
   	
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string N1, N2;
   		cin >> N1 >> N2;

   		
        Solution ob;
   		ob.swapDigits(N1, N2);
   		cout << N1 << " " << N2 << "\n";
   	}

    return 0;
}
// } Driver Code Ends