 
// { Driver Code Starts
#include <iostream>
using namespace std;

int EvenOdd(string n1 , string n2);

// driver code
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       string n1;
       cin>>n1;
       string n2;
       cin>>n2;
       cout<<EvenOdd(n1 , n2)<<endl;
   }
    return 0;
}
// } Driver Code Ends


int EvenOdd(string n1 , string n2)
{
    //code here.
    
    bool primoPari = false;
    bool secondoPari = false;
    
    char ultimoN1 = n1.at(n1.length()-1);
    char ultimoN2 = n2.at(n2.length()-1);
    
    if ( ultimoN1 == '2' || 
         ultimoN1 == '4' ||
         ultimoN1 == '6' ||
         ultimoN1 == '8' ||
         ultimoN1 == '0' )
        primoPari = true;
        
    if ( ultimoN2 == '2' || 
         ultimoN2 == '4' ||
         ultimoN2 == '6' ||
         ultimoN2 == '8' ||
         ultimoN2 == '0' )
        secondoPari = true;
    
    if (!primoPari && ! secondoPari) return 0;
    
    return 1;
    
    
}