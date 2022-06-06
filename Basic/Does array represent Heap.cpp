// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    bool isMaxHeap(int a[], int n)
    {
        // Your code goes here
        
        int nodo1 = 0;
        int nodo2 = 0;
        
        for (int i=1; i<n; i++)
        {
            if (nodo2==2) nodo1++;
            
            if (a[nodo1] > a[i]) nodo2++;
            else return false;
        }
        
        return true;
    }
};

// { Driver Code Starts.
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[4*n]={0};
       for(int i =0;i<n;i++){
           cin >> a[i];
       }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    }
    return 0;
}
  // } Driver Code Ends