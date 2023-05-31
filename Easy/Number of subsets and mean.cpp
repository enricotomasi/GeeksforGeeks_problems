//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    vector<long long> numOfSubsets(int Arr[], int N)
    {
        // code here
        long long m = 1000000007;

        int massimo = INT_MIN;
        int minimo = INT_MAX;
        
        for (int i=0; i<N; i++)
        {
            massimo = max(massimo, Arr[i]);
            minimo = min(minimo, Arr[i]);
        }
        
        long long nmassimo = 0;
        long long nminimo = 0;
        
        for (int i=0; i<N; i++)
        {
            if      (Arr[i] == massimo) nmassimo++;
            else if (Arr[i] == minimo)  nminimo++;
        }
        
        //cout << nmassimo << " " << massimo << "    " << nminimo << " " << minimo << endl;
        
        long long ansmax = 1;
        long long ansmin = 1;
        
        if (nmassimo > 1) ansmax = (pow((long long)2, nmassimo) - 1);
        ansmax %= m;
        
        if (nminimo > 1)  ansmin = (pow((long long)2, nminimo) - 1);
        ansmin %= m;
         
        return {ansmax, ansmin};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int Arr[N];
        for(int i=0; i<N; i++)
            cin>>Arr[i];

        Solution ob;
        vector<long long> ptr = ob.numOfSubsets(Arr,N);
        cout<<ptr[0]<<" "<<ptr[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends