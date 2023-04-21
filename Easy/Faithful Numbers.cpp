//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    long long nthFaithfulNum(int N)
    {
        // code here
        
        /*
            Express the number in its base 2 representation. 
            And use the powers of 7 for the bits of the number which are set. 
            For Example- (5)10 = (101)2. Therefore, the 5th faithful number will be 72+70 = 50.
        */
        long long ans = 0;
        
        int temp = N;
        
        string binario = "";
        
        while (temp)
        {
            
            binario = to_string(temp %2) + binario;
            temp /= 2;
        }
        
        //cout << "Binario: " << binario << endl;
        
        int n = binario.length();
        
        int potenza = 0;
        for (int i=n-1; i>=0; i--)
        {
            //cout << "i: " << i << " cifra: " << binario[i] << " potenza: " << potenza << endl;
            if (binario[i] == '1') ans += pow(7, potenza);
            potenza++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.nthFaithfulNum(N) << endl;
    }
    return 0;
}
// } Driver Code Ends