//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string multiplyby11(string b);
 
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string b;
		cin>>b;
		cout<<multiplyby11(b)<<endl;
		
	}
 
}
// } Driver Code Ends

string multiplyby11(string number)
{
    //code here.
    int n = number.length();
    string ans = "";
    int resto = 0;
   
    for (int i = n-1; i >= 0; i--)
    {
        int temp = number[i] - '0';
        int digit = (temp * 11) + resto ;
        number[i] = (digit % 10) + '0';
        resto = digit / 10 ;
    }
       
    ans = to_string(resto) + number;
    return ans;
}