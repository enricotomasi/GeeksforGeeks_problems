//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int countOfNumbers(int n)
    {
        // code here
        int ans = 0;
        
        for (int i=n-97; i<=n; i++)
        {
            int temp = i;
            int sum = 0;
            while (temp)
            {
                int digit = temp%10;
                sum += digit;
                temp/=10;
            }
            
            temp = sum;
            int sumsum = 0;
            while (temp)
            {
                int digit = temp%10;
                sumsum += digit;
                temp/=10;
            }
            
            int somma = i+sum+sumsum;
            if (somma == n)
            {
                ans++;
                // cout << "**********************************************";
            }
            // cout << i << " " << sum << " " << sumsum << " " << somma << endl;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        cout<<ob.countOfNumbers(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends