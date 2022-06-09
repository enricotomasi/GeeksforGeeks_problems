// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int *checkDoorStatus(int N)
    {
        // code here
        
        // N porte e N persone da 1 a N
        // porta 1 aperta, 0 chiusa. All'inizio son tutte chiuse (0)
        // Ogni persona può cambiare lo stato delle porte con un numero che è multiplo del numero della persona
        
        
       int *ans = new int[N];
       
       int a = 0;
       int b = 0;
       
       for (int i=1; i<=N; i++)
       {
           a = (int)sqrt(i);
           if (a==b) ans[i-1] = 0;
           else if (a>b)
           {
               ans[i-1]=1;
               b=a;
           }
           
       }
       
       
       
       return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        int* ptr = ob.checkDoorStatus(N);
        for(int i=0 ; i<N ; i++)
            cout<<ptr[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends