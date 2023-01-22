//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
	string MaxZero(string a[],int n)
	{
        string numero = "-1";
        int maxZeri = 0;
        
        for (int i=0; i<n; i++)
        {
            string temp = a[i];
            int zeri = 0;
            
            for (char c : temp)
            {
                if (c == '0') zeri++;
            }
            
            if (zeri > 0 && zeri > maxZeri)
            {
                maxZeri = zeri;
                numero = a[i];
            }
            
            if (zeri > 0 && zeri == maxZeri)
            {
                if (a[i].length() > numero.length()) numero = a[i]; 
                else if (a[i].length() == numero.length())
                {
                    bool maggiore = false;
                    int n = a[i].length();
                    string attuale = a[i];
                    
                    for (int i=0; i<n; i++)
                    {
                        if (attuale[i] > numero[i])
                        {
                            maggiore = true;
                            break;
                        }
                        else if (attuale[i] < numero[i]) break;
                    }
                    
                    if (maggiore) numero = a[i]; 
                }
            }
            
        }
        
	    return numero;    
	}
};
	 

//{ Driver Code Starts.

int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    string a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    

      

        Solution ob;
        cout << ob.MaxZero(a,n) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends