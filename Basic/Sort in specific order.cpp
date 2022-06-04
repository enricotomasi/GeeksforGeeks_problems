 
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        vector<long> pari;
        vector<long> dispari;
        
        for (int i=0; i<n; i++)
        {
            int numero = arr[i];
            if (numero %2 == 0) pari.push_back(numero);
            else dispari.push_back(numero);
        }
        
        sort(pari.begin(), pari.end());
        sort(dispari.begin(), dispari.end());
        reverse(dispari.begin(), dispari.end());
        
        int cursore = 0;
        
        for (auto i : dispari)
        {
            arr[cursore] = i;
            cursore++;
        }
        
        for (auto i : pari)
        {
            arr[cursore] = i;
            cursore++;
        }
        
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends