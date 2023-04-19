//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    bool wifiRange(int N, string S, int X)
    {
        // code here
        bool mappa[N] = {};
        
        for (int i=0; i<N; i++)
        {
            if (S[i] == '1')
            {
                mappa[i] = true;
                
                int j = i-1;
        
                while (j >= 0 && j >= i - X)
                {
                    //cout << j;
                    mappa[j] = true;
                    j--;
                }
                
                j = i+1;
                while (j < N && j <= i+X)
                {
                    //cout << j;
                    mappa[j] = true;
                    j++;
                }
                
            }
        }
        
        for (int i=0; i<N; i++) 
        {
            //cout << mappa[i];
            if (!mappa[i]) return false;
        }
        
        //cout << endl;
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends