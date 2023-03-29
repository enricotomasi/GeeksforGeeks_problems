//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string LargestEven(string S)
    {
        //complete the function here
        vector<int> numeri;
        
        for (auto it : S)
        {
            numeri.push_back(it - '0');
        }
        
        sort(numeri.begin(), numeri.end());
        reverse(numeri.begin(), numeri.end());
        
        int n = numeri.size();

        for (int i=n-1; i>=0; i--)
        {
            if (numeri[i] %2 == 0)
            {
                if (i==n-1) break;
                int temp = numeri[n-1];
                numeri[n-1] = numeri[i];
                numeri[i] = temp;
                break;
            }
        }
        
        sort(numeri.begin(), numeri.end()-1);
        reverse(numeri.begin(), numeri.end()-1);
        
        string ans = "";
        for (auto it : numeri) ans += to_string(it);
        
        return ans;
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.LargestEven(s) << "\n";
    }
return 0;
}


// } Driver Code Ends