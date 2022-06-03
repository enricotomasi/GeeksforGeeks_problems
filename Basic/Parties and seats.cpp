// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/* print the name of the parties along with seats
   they got in election and print the maximum seat
   received
*/
void Election2019(char party[], int seats[], int n)
{
    //Your code here
    
    int massimo = -1;
    
    vector<int> politici;
    
    for (int i=0; i<n; i++)
    {
    	politici.push_back(party[i]);        
    }
    
    sort(politici.begin(), politici.end());
    
    for (char c : politici)
    {
    	for (int i=0; i<n; i++)
    	{
    		if (c == party[i])
    		{
    			cout << party[i] << " " << seats[i] << endl;
    			if (massimo < seats[i]) massimo = seats[i];
    		}
    	}
    }
    
    cout << massimo << endl;
    
    
    
}

// { Driver Code Starts.
    
int main() {
	
		int t; 
		cin>>t;
		while(t--)
		{
		    int n; 
		    cin>>n;
		    char party[n];
		    int seats[n];
		    for(int i = 0; i < n; i++)
		        cin>>party[i]; 
		     
		    for(int i = 0; i < n; i++)
		        cin>>seats[i];
		     
		    Election2019(party, seats, n);
		}
}  // } Driver Code Ends