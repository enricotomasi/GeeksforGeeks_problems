//{ Driver Code Starts
// CPP for divisibilty of number by 999
#include<bits/stdc++.h>
using namespace std;
bool isDivisible999(string N);


// driver program
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string N ;
	cin>>N;
	int n = N.length();
	if (isDivisible999( N))
		cout << "Divisible\n";
	else
		cout << "Not divisible\n";
	}
	return 0;
}
// } Driver Code Ends


bool isDivisible999(string N)
{
    //code here
    int sc = 0;
    
    for (int i=0; i < N.length(); i++)
    {
        sc = sc * 10 + (N[i] - '0');
    }
    
    if (sc % 999 == 0) return true;
    
    return false;
    
    
    
    
}