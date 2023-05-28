//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
  public:
    long long noOfGroups(int N , int Arr[]) 
    {
        // code here
        
        /*
            Hint:
            
            Now, for groups of two being divisible by 3, 
            either both number have to belong to be divisible by 3, 
            or one number should leave a remainder 1, and the other a remainder 2. 
            This way the remainders add up to 3, making the sum divisible by 3. 
            To form a group of three, either all three numbers should give the same remainder,
            or one should give remainder 0, another should give 1, and the last should give 2.
        
        */
        
      
        long long int a[3] = {};
       
        for (int i=0; i<N; i++)
        {
            a[(Arr[i]%3)]++;
        }
       
        return  a[1] * a[2] + a[0] * (a[0] - 1) /
                2 + a[0] * (a[0] - 1) * (a[0] - 2) /
                6 + a[1] * (a[1] - 1) * (a[1] - 2) / 
                6 + a[2] * (a[2] - 1) * (a[2] - 2) / 
                6 + a[0] * a[1] * a[2];
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int Arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>Arr[i];

        Solution ob;
        cout << ob.noOfGroups(N,Arr) << endl;
    }
    return 0;
}
// } Driver Code Ends