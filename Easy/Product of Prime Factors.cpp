//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int primeProduct(int N)
    {
        //code here
        
        // Hint: The factors from 2 to sqrt(n) have multiples from sqrt(n)+1 to n.
        
        long long ans = 1;
        
        bool fatto = false;
        while (N % 2 == 0)
        {
            //cout << "2 ";
            if (!fatto) ans *= 2;
            N /= 2;
            fatto = true;
        }
        
        fatto = false;
        for (int i=3; i*i <= N; i+=2)
        {
            while (N % i == 0)
            {
                //cout << i << " ";
                if (!fatto) ans *= i;
                N /= i;
                fatto = true;
            }
            fatto = false;
        }
 
        if (N > 2) ans *= N;

        //cout << endl;        
        return ans;
  
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.primeProduct(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends