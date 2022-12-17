//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution
{
  public:
    int threeSumClosest(vector<int> arr, int target)
    {
        // Your code goes here
        int ans = INT_MIN;
        
        sort(arr.begin(), arr.end());
        
        int cl = INT_MAX;
        int n = arr.size();
        
        for (int i=0; i<n-2; i++)
        {
            int inizio = i + 1;
            int fine   = n -1;
            
            while (inizio < fine)
            {
                int somma = arr[i] + arr[inizio] + arr[fine];
                if (somma == target) return somma;
                
                int diff = abs(target - somma);
                if      (diff == cl) ans = max(ans, somma);
                else if (diff < cl)
                {
                    cl = diff;
                    ans = somma;
                }
                
                if (somma > target) fine--;
                else                inizio++;
                
            }
        }
        

        return ans;
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        int n,target;
        cin >> n >> target;
        
        vector<int> vec(n);
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> vec[i];
        Solution obj;
        cout << obj.threeSumClosest(vec, target) << "\n";
    }
}

//Position this line where user code will be pasted.

// } Driver Code Ends