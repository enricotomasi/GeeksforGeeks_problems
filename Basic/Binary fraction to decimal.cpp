//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    long double convertToDecimal(string n)
    {
        // code here
        bool virgola = false;
        string Sintero = "";
        string Sfrazionario = "";
        
        for (char c : n)
        {
            if (c=='.')
            {
                virgola = true;
                continue;
            }
            
            if (virgola) Sfrazionario += c;
            else         Sintero += c;
        } 
        
        int ni = Sintero.length();
        int nf = Sfrazionario.length();

        long double intero = 0;
        int potenza = 0;
        for (int i=ni-1; i>=0; i--)
        {
            int digit = Sintero[i] - '0';
            if (digit == 1) intero += digit * pow(2, potenza);
            potenza++;
        }
        
        long double frazionario = 0;
        potenza = 1;
        for (int i=0; i<nf; i++)
        {
           int digit = Sfrazionario[i] - '0';
           if (digit == 1) frazionario += digit / pow(2, potenza);
           potenza++;
        }
        
        // cout << "* " << intero << " ***** " << frazionario << " *" << endl;
        
        return intero + frazionario;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        
        cin>>n;

        Solution ob;
        cout << std::setprecision(100) << ob.convertToDecimal(n) << endl;
    }
    return 0;
}
// } Driver Code Ends