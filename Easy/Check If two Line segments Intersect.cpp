//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    int orientamento(int a[], int b[], int c[]) 
    {
        int temp = (b[1] - a[1]) * (c[0] - b[0]) - (b[0] - a[0]) * (c[1] - b[1]);
        if (temp == 0) return 0;
        if (temp > 0) return 1;
        return 2;
    }
    
    bool segmento(int a[],int b[],int c[])
    {
        return ((c[0]>=min(a[0],b[0]) && c[0]<=max(a[0],b[0])) &&
                (c[1]>=min(a[1],b[1]) && c[1]<=max(a[1],b[1])));
    }
    
    int doIntersect(int p1[], int q1[], int p2[], int q2[])
    {
        // code here

       int seg1 = (orientamento(p1,q1,p2));
       int seg2 = (orientamento(p1,q1,q2));
       int seg3 = (orientamento(p2,q2,p1));
       int seg4 = (orientamento(p2,q2,q1));
       
       if ((seg1 != seg2 && seg3 != seg4) 
        || (seg1 == 0 && segmento(p1,q1,p2)) 
        || (seg2 == 0 && segmento(p1,q1,q2)) 
        || (seg3 == 0 && segmento(p2,q2,p1)) 
        || (seg4 == 0 && segmento(p2,q2,q1))) return 1;
       
       return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p1[2], q1[2], p2[2], q2[2];
        cin >> p1[0] >> p1[1] >> q1[0] >> q1[1] >> p2[0] >> p2[1] >> q2[0] >>
            q2[1];
        Solution ob;
        cout << ob.doIntersect(p1, q1, p2, q2) << "\n";
    }
}
// } Driver Code Ends