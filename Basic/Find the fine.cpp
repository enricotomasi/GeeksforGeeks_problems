// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        long long ans = 0;
        bool pari = true;
        if (date%2 !=0) pari = false;
     
        for (int i=0; i<n; i++)
        {
            int macchina = car[i];
            if ((pari && macchina %2 != 0) || (!pari & macchina %2 == 0)) ans+= fine[i];
        }
        
        
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, date;
        cin >> n >> date;
        int car[n], fine[n];
        
        for (i = 0; i < n; i++){
            cin >> car[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> fine[i];
        }
        Solution obj;
        cout << obj.totalFine(n, date, car, fine) << endl;
    }
    return 0;
}
  // } Driver Code Ends