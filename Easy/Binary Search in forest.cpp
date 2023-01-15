//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int find_height(int tree[], int n, int k)
    {
        // code here
        sort(tree, tree+n);
         
        int inizio = 0;
        int fine = tree[n-1];
        
        while (inizio <= fine)
        {
            int taglio = 0;
            int mezzo = inizio + (fine-inizio)/2;
            
            for (int i=0; i<n; i++)
            {
                if (tree[i] > mezzo) taglio += tree[i]-mezzo;
            }
            
            if      (taglio == k) return mezzo;
            else if (taglio < k)  fine = mezzo-1;
            else                  inizio = mezzo+1;
        }
        
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;

        int tree[n];
        for(int i=0; i<n; i++)
            cin>>tree[i];
        cin>>k;
        Solution ob;
        cout<< ob.find_height(tree,n,k) << endl;
    }
    return 1;
}
// } Driver Code Ends