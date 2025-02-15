// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void reverse_dig(int &a,int &b)
{
    //Add your code here.
    string as = to_string(a);
    string bs = to_string(b);
    
    string asr = "";
    string bsr = "";

    for (int i=as.length()-1; i>=0; i--)
    {
        asr += as.at(i);
    }
    
    for (int i=bs.length()-1; i>=0; i--)
    {
        bsr += bs.at(i);
    }
    
    //cout << asr << "  " << bsr << "\n";
    
    a = atoi(asr.c_str());
    b = atoi(bsr.c_str());
    
    
    
}
void swap(int &a,int &b)
{
    //Add your code here.
    
     int c = a;
     a = b;
     b = c;
    
}


// { Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}  // } Driver Code Ends