 
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution{
public:
    string getNumber(int B, int N){
        // Write Your Code here
        
        string ans = "";
        while (N>0) {
            int temp = N%B;

            string aggiungi = "";
            stringstream ss;
            ss << temp; 
            
            if (temp <10) aggiungi = ss.str();
            else {
                switch (temp){
                    case 10:
                        aggiungi = "A";
                        break;
                    case 11:
                        aggiungi = "B";
                        break;
                    case 12:
                        aggiungi = "C";
                        break;
                    case 13:
                        aggiungi = "D";
                        break;
                    case 14:
                        aggiungi = "E";
                        break;
                    case 15:
                        aggiungi = "F";
                        break;
                    case 16:
                        aggiungi = "G";
                        break;
                    
                }
                
            }
            
            
            
            ans = aggiungi + ans;
            
            N/=B;

        }
        
        return ans;
        
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int B,N;
        cin>>B>>N;
        Solution ob;
        string ans  = ob.getNumber(B,N);
        cout<<ans<<endl;
    }
    return 0;
}  // } Driver Code Ends