//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
public:
    string deCypher(string S)
    {
        // Code Here
        int n = S.length();
        
        int temp = 0;
        vector<int> lista;
        int t = 0;
      
        for (int i = n - 1; i >= n / 2; i--)
	    {
            if (S[i] >= 65) t = S[i] - 55;
            else t = S[i] - '0';
              
            int t2 = temp ^ t;
            lista.push_back(t2);
            temp = temp ^ t2;
        }
      
        string ans = "";
        
        for (int i = lista.size() - 1; i >= 0; i--)
	    {
            char c = '@';
            
            if (lista[i] > 9) c = lista[i] + 55;
            else          c = lista[i]+'0';
                
            ans += c;
        }
      
        
        return ans;
    }
        

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        Solution ob;
        cout<<ob.deCypher(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends