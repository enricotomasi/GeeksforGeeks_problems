// { Driver Code Starts
#include<stdio.h>
 

int countValues (int n);
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		
		printf("%d\n",countValues(n));
	}
}// } Driver Code Ends


/*You are required to complete this method */
int countValues (int n)
{
   //Your code here 
   int ans = 0;
   
   for (int i=0; i<n; i++)
   {
       if ((n+i) == (n^i)) ans++;
   }
   
   return ans;
   
}
 