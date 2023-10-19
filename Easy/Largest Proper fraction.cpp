//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    pair<int, int> largestFraction(int N)
    {
        // code here
        int a = -1;
        int b = -1;
        double fract = -1.00;
        
        int stop = N/2;
        
        if (N % 2 != 0) stop++;
        
        for (int i=1; i<stop; i++)
        {
            int j = N -i;
            
            //if (i > j or i == j) continue;

            double fractTemp = i/j;
            int gc = __gcd(i, j);
            
            //cout << i << " " << j << " " << fract << " " << gc << endl;
            
            if (fractTemp > fract and gc == 1)
            {
                a = i;
                b = j;
            }
 
        }
        
        return {a, b};
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        pair<int, int> ans = ob.largestFraction(N);
        cout<<ans.first<<" "<<ans.second<<"\n";
    }
    return 0;
}
// } Driver Code Ends