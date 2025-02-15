// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string isInRange(int N){
        // code here 
        string ans = "";
        switch (N) {
            case 1:
            ans = "one";
            break;
            case 2:
            ans = "two";
            break;
            case 3:
            ans = "three";
            break;
            case 4:
            ans = "four";
            break;
            case 5:
            ans = "five";
            break;
            case 6:
            ans = "six";
            break;
            case 7:
            ans = "seven";
            break;
            case 8:
            ans = "eight";
            break;
            case 9:
            ans = "nine";
            break;
            case 10:
            ans = "ten";
            break;
            default:
            ans = "not in range";
            
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isInRange(N) << endl;
    }
    return 0; 
}   // } Driver Code Ends 
