//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n)
    {
        // code here
        string ans = "1";
        char last = '_';
        int conta = 0;
        
        n--;
        
        while (n)
        {
            string temp = ans;
            ans = "";
            
            conta = 1;
            last = temp[0];
            for (int i=1; i<temp.size(); i++)
            {
                char c = temp[i];

                if (c == last)
                {
                    conta++;    
                }
                else
                {
                    ans += to_string(conta);
                    ans += last;
                    conta = 1;
                }
                
                last = c;
            }
            
            if (conta > 0)
            {
                ans += to_string(conta);
                ans += last;
            }
            
            n--;
            // cout << ans << endl;
        }
        
        
        
        
        return ans;
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends