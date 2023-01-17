//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
  //Your code here
  int totale = 0;
        
    for (int i=0; i<n; i++) totale += A[i];
    
    int sinistra = 0;
    int destra = totale;
    
    // cout << "Totale: " << totale << endl;
    
    for (int i=0; i<n; i++)
    {
        destra -= A[i];
        // cout << i << "# sinistra:" << sinistra << " destra:" << destra << endl;
        if (sinistra == destra) return i;
        sinistra += A[i];
    }
    
    return -1;
}