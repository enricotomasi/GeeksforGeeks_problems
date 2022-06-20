// { Driver Code Starts
 

#include<bits/stdc++.h>
using namespace std;
 
int findDuplicate(int a[]);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int A[10];
		for(int i=0;i<10;i++)
		cin>>A[i];
		
		cout<<findDuplicate(A)<<endl;
	}
}// } Driver Code Ends

int findDuplicate(int A[])
{
    // Your code goes here
    
    if (A[5] == A[6]) return A[5];
    
    return A[4];
    
    
}