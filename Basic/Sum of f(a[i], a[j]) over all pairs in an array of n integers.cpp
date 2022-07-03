// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// Function to calculate the sum
int sum(int a[], int n);


// Driver code
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
       {
           cin>>arr[i];
       }
       	cout << sum(arr, n)<<endl; 
    }

	return 0;
}
// } Driver Code Ends


int sum(int a[], int n)
{
    // Complete the function
   int ans = 0;
   int temp =0;
   unordered_map<int, int> mappa;
   
   for(int i = 0; i < n; i++)
   {
       ans += i*a[i] - temp;

       ans += mappa[a[i]+1];
       ans -= mappa[a[i]-1];

       mappa[a[i]]++;
       temp += a[i];
   }
   
   return ans;
    
}
