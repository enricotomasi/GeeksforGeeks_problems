// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 
int binarySearch(int arr[], int low, int high);
int main()
{
	int test =0; 
	cin>>test;
	while(test--)
	{
	    int n, i; 
	    cin>>n; 
	    int a[n]; 
	    for(i=0; i<n; i++)
	    cin>>a[i]; 
	    
	    cout<<binarySearch(a, 0, n-1)<<endl; 
	    
	   // cout<<"\n\n"; 
	}
	
}
// } Driver Code Ends


int binarySearch(int arr[], int low, int high)
{
      //add code here.
      
      while (low <= high)
      {
          int mezzo = (high+low)/2;
          
          if (arr[mezzo] > mezzo) high = mezzo-1;
          else if (arr[mezzo] < mezzo) low = mezzo+1;
          else return mezzo;
      }
      
      return -1;
      
}