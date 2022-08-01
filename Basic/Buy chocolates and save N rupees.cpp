//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int isPossible(int N)
    {
        // code here
        
        int n = N;
        int m = 100-n;
        
        if (m==0) return true;
        if (m<3) return false;
        if (m%3 == 0) return true;
        if (m%7 == 0) return true;
        
        int passaggi = (int)(m/3)+2;
        
        for (int i=0; i<passaggi; i++)
        {
            for (int j=0; j<passaggi; j++)
            {
                int temp = (i*3) + (j*7);
                //cout << "*" << temp << "* ";
                if (temp == m) return true;
            }
        }
               
        return false;

    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin >> N;
        
        Solution ob;
        cout<<ob.isPossible(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends