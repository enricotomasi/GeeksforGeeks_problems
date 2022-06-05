 
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

class Solution{   
public:
    string compareNum(int A,int B){
        // code here 
        string frase = "";
        if (A<B) frase = " is less than ";
        else if (A>B) frase = " is greater than ";
        else frase = " is equals to ";
        
        cout << A;
        cout << frase;
        cout << B;
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A,B;
        cin >> A>>B;
        Solution ob;
        cout << ob.compareNum(A,B) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends