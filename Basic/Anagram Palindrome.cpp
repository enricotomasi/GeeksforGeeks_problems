 
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int isPossible (string S)
{
    // your code here
    int n = S.length();
    
    int mappa[256] = {};
    
    for (int i=0; i<n; i++)
    {
        // cout << (int)S.at(i) << " --- ";
        mappa[(int)S.at(i)]++;
    }
    
    bool jolly = false;
    if (n%2!=0) jolly = true;
    
    for (int i=0; i<255; i++)
    {
        //cout << mappa[i] << " *** ";
        
        if (mappa[i] != 0 && mappa[i] %2 != 0)
        {
            if (jolly)
            {
                jolly = false;
            }
            else
            {
                return 0;
            }
            
        }
        
    }
    
    
    
    return 1;
    
}