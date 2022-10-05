//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string getLuckyNum(int N)
    {
        // code here
        
        // Find the max number of 5's, 3's and 2's in the number.
        // Try all the combinations using 3 nested Loops.
        
        
         for(int i=(N/6); i>=0; i--)
         {
            int t=N-(6*i);
            
            for(int j=(t); j>=0; j--)
            {
                int r=t-(10*j);
            
                for(int k=(r/15); k>=0; k--)
                {
                    
                    if(N==((i*6)+(j*10)+(k*15)))
                    {
                        string str = "";
                        for(int a=0; a<i*6; a++)  str +="5"; 
                        for(int b=0; b<j*10; b++) str += "3";
                        for(int c=0; c<k*15; c++) str += "2";
                        return str;
                    }
                    
                }
            }
        }
        
        return "-1";

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.getLuckyNum(N) << endl;
    }
    return 0;
}
// } Driver Code Ends