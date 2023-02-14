//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int subArraySum(int arr[], int n, int sum)
    {
    	//code here.
    	
    	/*
    	    A way is to use a map/hash table. The idea is to maintain sum of elements encountered so far in a variable
    	    (say curr_sum). 
    	    
    	    Let the given number is sum. Now for each element, we check if curr_sum – given number exists in the map or not. 
    	    If we found it in the map/hash table that means, we have a subarray present with given sum,
    	    else we insert curr_sum into the map/hash table and proceed to next element.
    	    If all elements of the array are processed and we didn’t find any subarray with given sum,
    	    then subarray doesn’t exists.
    	*/
    	
    	int ans = 0;
    	
    	unordered_map<int, int> mappa;
    	mappa[0] = 1;
    	
    	int corrente = 0;
    	
    	for (int i=0; i<n; i++)
    	{
    	    corrente += arr[i];
    	    if (mappa.find(corrente - sum) != mappa.end())
    	    {
    	        ans += mappa[corrente - sum];
    	    }
    	    mappa[corrente]++;
    	}
    	
    
    	return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution ob;
	    cout<<ob.subArraySum(arr, n, sum);
	    cout<<'\n';
	}
	return 0;
}
// } Driver Code Ends