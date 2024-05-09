//{ Driver Code Starts
//Initial template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    string ExcelColumn(int N)
    {
        // Your code goes here
        string ans = "";
        
        while (N > 0)
        {
            char c = '@';
            
            if (N % 26 == 0)
            {
                //cout << "# " ;
                c = 'Z';
                N /= 26;
                N--;
            }
            else
            {
                //cout << "* ";
                c = 'A' + (N % 26) - 1;
                N /= 26;
            }
            
            
            ans = c + ans;

            //cout << " c: " << c << " N: " << N << " ans:" << ans << endl;
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.ExcelColumn(n)<<endl;
    }
    return 0;
}
    
// } Driver Code Ends
