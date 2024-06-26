//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

/*
    The maximum width of container are the outermost lines. 
    So in order to find out the maximum area we need to find out the maximum possible height. 
*/

long long maxArea(long long A[], int len)
{
    // Your code goes here
    int ans = 0;
    
    int start = 0;
    int end = len - 1;
    
    while (start < end)
    {
        int h = min(A[start], A[end]);
        int a = (end - start) * h;
        ans = max(a, ans);
        
        if (A[start] < A[end])
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    
    return ans;
    
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends
