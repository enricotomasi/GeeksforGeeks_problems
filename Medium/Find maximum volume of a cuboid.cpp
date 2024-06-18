//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution 
{
  public:
    // Hint: Try to find the dimensions of a cuboid such that the sum of the lengths of all its edges 
    //       equals the given rope length perimeter and the total surface area equals the given area.
    
    double maxVolume(double perimeter, double area) 
    {
        // code here
        double t = perimeter - sqrt(perimeter * perimeter - (area * 24));
    
        double b = pow(t / 12,2); 

        double h = perimeter / 4 - (2 * (t / 12));

        return b * h;

    }
};

//{ Driver Code Starts.
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        double perimeter, area;
        cin >> perimeter >> area;
        // if (area == 5 and parameter == 15) {
        //     cout << "0.46" << endl;
        //     return 0;
        // }
        Solution ob;
        double ans = ob.maxVolume(perimeter, area);
        cout.precision(2);
        cout << fixed << ans << "\n";
    }
}
// } Driver Code Ends