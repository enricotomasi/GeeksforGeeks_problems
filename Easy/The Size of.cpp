//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

// Function prototype
void dataTypes(int, float, double, long long, string);


// } Driver Code Ends
//User function Template for C++

// Function to find size of different data types
void dataTypes(int a, float b, double c, long long l, string d)
{
    a = b/c;
    c = b/a;
    b = c/a;
    l += b;
    
    cout << sizeof(a);
    cout << " ";
    
    cout << sizeof(c);
    cout << " ";
    
    cout << sizeof(b);
    cout << " ";

    cout << sizeof(l);


    cout << endl;
    

    cout << sizeof(d);
    cout << " ";
    
    cout << sizeof(d[3]);
    cout << endl;

}

//{ Driver Code Starts.

// Driver Code
int main()
{
    int a;
    float b;
    double c;
    long long l;
    string d;
    
    int t;
    cin >> t;
    
    while(t--){
        
        cin >> a >> b >> c >> l >> d;
    
        dataTypes(a, b, c, l, d);
    }
    
    return 0;
}
// } Driver Code Ends