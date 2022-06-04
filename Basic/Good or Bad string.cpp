 
// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
// User function template for C++

class Solution
{
  public:
    int isGoodorBad(string S)
    {
        // code here
        
        int vocali = 0;
        int consonanti = 0;
        
        for (auto c : S)
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vocali++;
                consonanti = 0;
            }
            else
            {
                consonanti++;
                vocali = 0;
            }
            
            if (consonanti >3 || vocali >5) return 0;
            
        }
        
        
        return 1;
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        
        cin >> S;
        
        Solution ob;
        cout << ob.isGoodorBad(S) << endl;
    }
    return 0; 
}  // } Driver Code Ends