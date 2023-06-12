//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
        string smallestNumber(string num)
        { 
            //code here.
            int n = num.length();
            
            int primo = 0;
            int secondo = n-1;
            int arr[n];
            
            for (int i=n-1; i>=0; i--)
            {
                if (num[primo] > num[i] && num[i] != '0') primo = i;
                if (num[secondo] > num[i]) secondo = i;
                arr[i] = secondo;
            }
            
            if (primo != 0)
            {
                swap(num[primo], num[0]);
                return num;
                
            }
            
            for (int i=1; i<n; i++)
            {
                if (num[i] > num[arr[i]])
                {
                    swap(num[i], num[arr[i]]);
                    break;
                }
            }
            
            return num;
            
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
       cout <<ob.smallestNumber(s) << endl;
    }
return 0;
}


// } Driver Code Ends