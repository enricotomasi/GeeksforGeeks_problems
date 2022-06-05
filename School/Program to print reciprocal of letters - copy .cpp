 
// { Driver Code Starts
// Driver function
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    string reciprocalString(string S){
        // Write Your code here
        
        string ans = "";
        for (int i=0; i<S.size(); i++) {
            char c = S[i];
            
            if (c >= 'a' && c <= 'z') {
                c = 'z' - (c - 'a');
            } else if (c >= 'A' && c <= 'Z') {
                c = 'Z' - (c - 'A');
            } 
    
            ans += c;
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;

    }

	return 0;
}  // } Driver Code Ends