//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to find nth number made of only prime digits.
    int primeDigits(int n)
    {
        //code here
        int i = 0;
        int ans = 1;
        
        while (i < n)
        {
            int copia = ans;
            
            bool cifrePrime = true;
            
            while (copia)
            {
                int digit = copia %10;

                if (digit == 0 ||
                    digit == 1 ||
                    digit == 4 ||
                    digit == 6 ||
                    digit == 8 ||
                    digit == 9) 
                {
                    cifrePrime = false;
                    break;
                }
        
                copia /=10;
            }
            
            ans++;
            if (cifrePrime)
            {
                i++;
            }

        }
        
        return ans-1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    // All the above tasks are preprocessing, now you can run testcases
    // and then print the values accordingly
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout << ob.primeDigits(n) << "\n";   
    }
}

// } Driver Code Ends