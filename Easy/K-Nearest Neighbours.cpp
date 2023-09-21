//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Point
{
	int grp;
	double x, y;
	double distance; 
};

/*
A utility structure to store the info of points
x and y represents the 2D coordinates of the points
grp represents to which particular point belongs
struct Point
{
	int grp;
	double x, y;
	double distance; 
};
*/
// function should return to which grp 
// the test data will belong
int classifyAPoint(Point arr[], int n, int k, Point test);

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>>n;
	    Point arr[n], test;
	    for(int i=0; i<n ; i++)
	        cin>>arr[i].x>>arr[i].y>>arr[i].grp;
	   cin>>test.x>>test.y>>k;
	   cout<<classifyAPoint(arr, n, k, test)<<endl;
	}
	return 0;
}

// } Driver Code Ends


/*
A utility structure to store the info of points
x and y represents the 2D coordinates of the points
grp represents to which particular point belongs
struct Point
{
	int grp;
	double x, y;
	double distance; 
};
*/
// function should return to which grp 
// the test data will belong

int classifyAPoint(Point arr[], int n, int k, Point test)
{
    // Code here
    pair<double, int> dist[n];
    
    for (int i = 0; i < n; i++)
    {
        double d = sqrt((arr[i].x - test.x) * (arr[i].x - test.x) + (arr[i].y - test.y) * (arr[i].y - test.y));
        dist[i] = {d, arr[i].grp};
    }

    sort(dist, dist + n, [] (const std::pair<double, int>& p1, const std::pair<double, int>& p2)
    {
        return p1.first < p2.first;
    });
    
    int mappa[k];
    for (int i = 0; i < k; i++)
    {
        mappa[i] = dist[i].second;
    }
    
    int ans = -1;
    int m = 0;
    
    for (int i = 0; i < k; i++) 
    {
        int c = 0;
        
        for (int j = 0; j < k; j++) 
        {
            if (mappa[j] == mappa[i]) c++;
        }
    
        if (c > m)
        {
            ans = mappa[i];
            m = c;
        }
    }

    return ans;

}