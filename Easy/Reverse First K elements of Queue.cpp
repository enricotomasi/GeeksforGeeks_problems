//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k)
{
    // add code here.
    queue<int> res;
    
    queue<int> t1;
    vector<int> t2;
    
    int j = 0;
    while (!q.empty())
    {
        if (j<k)
        {
            t2.push_back(q.front());
        }
        else
        {
            t1.push(q.front());
        }
        q.pop();
        j++;
    }
    
    for (int i=t2.size()-1; i>=0; i--)
    {
        res.push(t2[i]);
    }
    
    while (!t1.empty())
    {
        res.push(t1.front());
        t1.pop();
    }

    return res;
}