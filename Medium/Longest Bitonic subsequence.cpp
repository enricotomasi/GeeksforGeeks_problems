//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution
{
	public:
	int LongestBitonicSequence(int n, vector<int>nums)
	{
        vector<int>temp(n,1);

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[i] > nums[j] && temp[i] < temp[j] + 1)
                {
                    temp[i] = temp[j] + 1;
                }
            }
        }
        
        vector<int> temp2(n, 1);

        for (int i = n-2; i >= 0; i--)
        {
            for (int j = n-1; j > i; j--)
            {
                if (nums[i] > nums[j] && temp2[i] < temp2[j] + 1)
                {
                    temp2[i] = temp2[j] + 1; 
                }
            }
        }
        

        int ans = 0; 
        
        for (int i = 1; i < n - 1; i++)
        {
            if (temp[i] > 1 && temp2[i] > 1)
            {
                ans = max(ans, temp[i] + temp2[i] - 1); 
            }
        }
            
        return ans;
	}
};

//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> nums(n);
        Array::input(nums,n);
        
        Solution obj;
        int res = obj.LongestBitonicSequence(n, nums);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
