//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    int CountPairs (int arr[], int n)
    {
        //code here.
        int due = 0;
        int maggdue = 0;
        
        for (int i=0; i<n; i++)
        {
            if (arr[i] == 2) due++;
            else if (arr[i] > 2) maggdue++;
        }
        
        return due*maggdue + (maggdue*(maggdue-1))/2;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	  int n;
	  cin>>n;
	  int arr[n];
	  for(int i=0;i<n;i++)
	  cin>>arr[i];
	  Solution ob;
	  cout <<ob.CountPairs(arr, n)<<endl;
	}
	return 0;
}

// } Driver Code Ends