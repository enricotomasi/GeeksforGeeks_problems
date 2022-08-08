//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    double findArea(int A,int B,int C)
    {
        //code here
        if (A > (B+C) || B > (A+C) || C > (A+B)) return 0;
        
        double p = (A+B+C)/(double)2;
        
        double area = sqrt(p * (p-A) * (p-B) * (p-C));
        
        return area;
        
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<fixed<<setprecision(3);
        cout<<ob.findArea(A,B,C)<<"\n";
    }
}
// } Driver Code Ends