//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int countSquare(int B)
    {
	    // code here 
	    /*
	    
    	    Since the triangle is isosceles, 
    	    the given base would also be equal to the height. 
    	    Keep side of the square must be parallel to the base of the triangle.
    	    
	    */
	    
	    return ((B-2)/2 * (((B-2)/2)+1)) /2;
	    
	    
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int B,count;
    	cin>>B;
    	Solution ob;
    	count = ob.countSquare(B);
    	cout<<count<<endl;
    }
}
// } Driver Code Ends