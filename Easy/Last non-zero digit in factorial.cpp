//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution
{
public:
   
    int lastNon0Digit(int n)
    {
        // Code Here
        int primi[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};
        
        if (n < 10) return primi[n];
        
        if (((n / 10) % 10) % 2 == 0) return (6 * lastNon0Digit(n / 5) * primi[n % 10]) % 10;
        
        return (4 * lastNon0Digit(n / 5) * primi[n % 10]) % 10;
        
        
    }
    
};

//{ Driver Code Starts.


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		cout<< ob.lastNon0Digit(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends