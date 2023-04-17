//{ Driver Code Starts
// C++ program to rearrange the elements 
// in array such that even positioned are 
// greater than odd positioned elements
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> assign(int a[], int n)
    {
        // Complete teh function
        for (int i=1; i<n; i++)
        {
            if ((i+1) %2 == 0)
            {
                if (a[i] < a[i-1])
                {
                    int temp = a[i];
                    a[i] = a[i-1];
                    a[i-1] = temp;
                }
            }
            else
            {
                if (a[i] > a[i-1])
                {
                    int temp = a[i];
                    a[i] = a[i-1];
                    a[i-1] = temp;
                }
            }
        }
        
        vector<int> ans;
        
        for (int i=0; i<n; i++) ans.push_back(a[i]);

        return ans;
    }
};

//{ Driver Code Starts.

//checking if answer is correct or not
bool checkOrder(vector<int> ans){
    for(int i = 1; i < ans.size(); i++){
        if(i%2 != 0){
            if(ans[i] < ans[i-1])
            {
                return false;
            }
        }
        else{
            if(ans[i] > ans[i-1]){
                return false;
            }
        }
    }
    return true;
}
// Driver Code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0; i<n; i++)
    	  cin>>arr[i];
    	Solution ob;
        vector<int> ans;
        ans = ob.assign(arr, n);
        bool check_ans = checkOrder(ans);
        if(check_ans)
            cout << "Correct\n";
        else 
            cout << "Wrong Answer\n";
    }
    return 0;
}
// } Driver Code Ends