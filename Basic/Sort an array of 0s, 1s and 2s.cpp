//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int mappa[3] = {};
        
        for (int i=0; i<n; i++)
        {
            mappa[a[i]]++;
        }
        
        int zeri = mappa[0];
        int uni = mappa[1];
        int dui = mappa[2];
        
        int cur = 0;
        
        for (int i=0; i<zeri; i++)
        {
            a[cur] = 0;
            cur++;
        }
        
        for (int i=0; i<uni; i++)
        {
            a[cur] = 1;
            cur++;
        }
        
        for (int i=0; i<dui; i++)
        {
            a[cur] = 2;
            cur++;
        }
       
        
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends