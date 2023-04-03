//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*
str: string in which pattern we have to find pattern.
text: pattern needs to searched.
*/

bool searchPattern(string str, string pat)
{
    // your code here
    int n = str.length();
    int np = pat.length();
    
    if (n < 1 || np < 1) return false;
    
    for (int i=0; i<n; i++)
    {
        if (str[i] == pat[0])
        {
            if (np == 1) return true;
            int c = i+1;
            int cp = 1;
            
            bool trovato = true;
            while (cp < np)
            {
                //cout << c << " " << cp << " " << str[c] << " " << pat[cp] << endl;
                if (c > n || str[c] != pat[cp])
                {
                    trovato = false;
                    break;
                }
                
                c++;
                cp++;
            }
            
            if (trovato) return true;
        }
    }
    
    return false;
}



//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    
    while(t--)
    {
        string str, pat;
        cin>>str;
        cin>>pat;
        
        if(searchPattern(str, pat) == true)
            cout << "Present" <<endl;
        else cout << "Not present" <<endl;
    }
}


// } Driver Code Ends