//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    
    vector<string> convert(int a,int b,int c,string d)
    {
        // code here
        vector<string> ans;
        
        // decimal -> binary
        string aa = "";
        while(a)
        {
            aa = to_string(a%2) + aa;
            a/=2;
        }
        ans.push_back(aa); 
        
        
        // binary -> decimal
        int ba = 0;
        int cifre = 0;
        while (b)
        {
            int digit = b%10;
            ba += digit * pow(2, cifre);
            b/=10;
            cifre++;
        }
        ans.push_back(to_string(ba));
        
        
        // decimal -> hex
        string ca = "";
        while (c)
        {
            int digit = c%16;
            if      (digit < 10)  ca = to_string(digit) + ca; 
            else if (digit == 10) ca = 'A'              + ca;
            else if (digit == 11) ca = 'B'              + ca;
            else if (digit == 12) ca = 'C'              + ca;
            else if (digit == 13) ca = 'D'              + ca;
            else if (digit == 14) ca = 'E'              + ca;
            else if (digit == 15) ca = 'F'              + ca;
            c/=16;
        }
        ans.push_back(ca);
        
        // hex -> decimal
        int da = 0;
        int conta = d.length()-1;
        for (int i=0; i<d.length(); i++)
        {
            int num = 0;
            char digit = d[i];
            if      (digit == 'A') num = 10;
            else if (digit == 'B') num = 11;
            else if (digit == 'C') num = 12;
            else if (digit == 'D') num = 13;
            else if (digit == 'E') num = 14;
            else if (digit == 'F') num = 15;
            else                   num = (int)digit - '0';
            
            da += num * pow(16, conta);
            conta--;
        }
        ans.push_back(to_string(da));
        
        
       
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
        int a,b,c;
        string d;
        cin>>a>>b>>c>>d;
        
        Solution ob;
        vector<string> ans = ob.convert(a,b,c,d);
        
        for(int i = 0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0; 
}
// } Driver Code Ends