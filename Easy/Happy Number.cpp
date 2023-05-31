//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int isHappy(int N)
    {
        // code here
        
        set<int> s;
        
        while (true)
        {
            int numero = 0;
            int temp = N;
            
            while (temp)
            {
                numero += (temp % 10) * (temp % 10);
                temp /=10;
            }
            
            if (numero == 1) return true;
            
            if (s.find(numero) != s.end()) return false;
            
            s.insert(numero);
            
            // cout << numero << endl;
            N = numero;
        }
        
        return 42;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends