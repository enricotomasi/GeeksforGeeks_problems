//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int isPatternPresent(string S, string P) 
    {
        // code here
        string pattern;
        
        int ns = S.length();
        int np = P.length();
        
        if (np > ns) return 0;
        
        if (P[0] == '^')
        {
            //cout << "Inizio" << endl;
            int j = 1;
            for (int i=0; i<np-1; i++)   
            {
                //cout << S[i] << " " << P[j] << endl;
                if (S[i] != P[j]) return 0;
                j++;    
            }
        }
        else if (P[np-1] == '$')
        {
            //cout << "fine" << endl;
            
            int j=np-2;
            for (int i=ns-1; i>ns-np; i--)
            {
                //cout << S[i] << " " << P[j] << endl;
                if (S[i] != P[j]) return 0;
                j--;
            }
        }
        else
        {
            //cout << "ne inizio ne fine" << endl;
            for (int i=0; i<ns; i++)
            {
                if (S[i] == P[0])
                {
                    //cout << endl << S[i] << " " << P[0] << endl;
                    
                    int k = i+1; // string;
                    bool ok = true;
                    for (int j=1; j<np; j++)
                    {
                        if (j >= ns) return 0;
                        
                        //cout << S[k] << " " << P[j] << endl;
                        
                        if (S[k] != P[j])
                        {
                            ok = false;
                            break;
                        }
                        
                        k++;
                    }
                    
                    if (ok) return 1;
                }
            }
            
            
            return 0;
        }
        
        return 1;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string P,S;

        cin>>P;
        cin>>S;

        Solution ob;
        cout << ob.isPatternPresent(S,P) << endl;
    }
    return 0;
}
// } Driver Code Ends