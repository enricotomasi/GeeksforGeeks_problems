//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
    public:
        int getCount(int a, int b)
        { 
            int temp = b / a; 
            int ans = temp; 
            
            for (int i = 2; i * i <= temp; i++)
            { 
                if (temp % i == 0)
                { 
                    while (temp % i == 0) temp /= i; 
                    ans -= ans / i; 
                } 
            } 
            
            if (temp > 1) ans -= ans / temp; 
                
            return ans;
        }
            
        long long int sumOfGCDofPairs(int N)
        { 
            //complete the function here 
            long long int ans = 0;
            long long int m = 1000000007; 
            
            for (int i = 1; i * i <= N; i++)
            { 
                if (N % i == 0)
                { 
                    int a = i; 
                    int b = N / i; 

                    ans += (a * getCount(a, N)) % m; 
                    ans %= m;
                    if (a != b) ans += (b * getCount(b, N)) % m; 
                } 
            } 
          
            return ans % m; 
            
            
    } 
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.sumOfGCDofPairs(n) << endl;
    
    }
    return 0; 
} 

// } Driver Code Ends