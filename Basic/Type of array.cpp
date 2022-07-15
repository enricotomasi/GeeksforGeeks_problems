// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
  
    public:
    pair<long long, int> maxNtype(long long arr[], long long n)
    {
        //code here.
        
        int maggiori = 0;
        int minori = 0;
        
        int last = arr[0];
        long long massimo = arr[0];
        for (int i=1; i<n; i++)
        {
            if (arr[i] > last) maggiori++;
            else minori++;
            massimo = max(massimo,arr[i]);
            last = arr[i];
        }
        
        // cout << "maggiori:" << maggiori << " minori: " << minori << " massimo:" << massimo << endl; 
        
        int tipo = -1;
        if (maggiori == 0) tipo = 2; // Descending
        else if (minori == 0) tipo = 1; // Ascending
        else if (minori > maggiori) tipo = 3; // Descending Rotated
        else tipo = 4; // Ascending Rotated
    
        pair<long long, int> ans = {massimo, tipo};
        return ans;
    }

};

// { Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        pair<long long, int> pair = ob.maxNtype(arr, n);
        cout<<pair.first<<" "<<pair.second<<"\n";
    }
	return 0;
}  // } Driver Code Ends