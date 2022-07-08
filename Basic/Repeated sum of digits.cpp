// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
public:
    int repeatedSumOfDigits(int N)
    {
        // code here 
        int temp = 0;
        
        while (N>0)
        {
            temp += N%10;
            N/=10;
        }
        
        if (temp >= 10)
        {
            return repeatedSumOfDigits(temp);
        }
        
        return temp;
        
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
        cout << ob.repeatedSumOfDigits(N) << endl;
    }
    return 0; 
}   // } Driver Code Ends