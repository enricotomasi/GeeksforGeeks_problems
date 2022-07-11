// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



 // } Driver Code Ends
class Solution
{
  public:
    vector<long long> getDigitDiff1AndLessK(long long *arr, int n, long long k)
    {
        // code here
        vector<long long> ans;
        
        for (int i=0; i<n; i++)
        {
            long long item = arr[i];
            //cout << i << "# item: " << item << endl;
            if (item <k)
            {
                bool ok = true;
                int last = -1;
                int itemT = item;
                if (itemT <=9) ok = false;
    
                while (itemT)
                {
                    int digit = itemT %10;
                    //cout << "digit: " << digit << " last:" << last << " abs(digit-last):" << abs(digit-last) << endl;
                    if (last != -1 && (abs(digit-last) !=1))
                    {
                        ok =false;
                        break;
                    }
                    
                    last = digit;
                    itemT /=10;
                }
                if (ok)
                {
                    ans.push_back(item);
                    //cout << "OK! Aggiungo: " << item << endl;
                }
            }
            //cout << endl;
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        auto ans = obj.getDigitDiff1AndLessK(arr, n, k);
        for (auto x: ans) {
            cout << x << " ";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";

    }
    return 0;
}
  // } Driver Code Ends