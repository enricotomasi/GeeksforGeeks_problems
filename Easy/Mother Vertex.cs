//{ Driver Code Starts
//Initial Template for C#

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DriverCode
{

    class GFG
    {
        static void Main(string[] args)
        {
            int testcases;// Taking testcase as input
            testcases = Convert.ToInt32(Console.ReadLine());
            while (testcases-- > 0)// Looping through all testcases
            {
                var ip = Console.ReadLine().Trim().Split(' ');
                int V = int.Parse(ip[0]);
                int E = int.Parse(ip[1]);
                List<List<int>> adj = new List<List<int>>();
                for (int i = 0; i < V; i++)
                {
                    adj.Add(new List<int>());
                }
                for (int i = 0; i < E; i++)
                {
                    ip = Console.ReadLine().Trim().Split(' ');
                    int u = int.Parse(ip[0]);
                    int v = int.Parse(ip[1]);
                    adj[u].Add(v);
                }
                Solution obj = new Solution();
                var res = obj.findMotherVertex(V, ref adj);
                Console.WriteLine(res);
            }
        }
    }
}
// } Driver Code Ends


//User function Template for C#

class Solution
{

    //Function to find a Mother Vertex in the Graph.
    public static int conta = 0;
    
    
    public int findMotherVertex(int V, ref List<List<int>> adj)
    {
        //code here
        var vis = new bool[V];
        for (int m=0; m<V; m++) vis[m] = false;
        
        for (int i=0; i<V; i++)
        {
            conta = 0;
            for (int m=0; m<V; m++) vis[m] = false;
            dfs(adj, i, vis);
            if (conta == V) return i;
        }
        
        return -1;
    }
    
    public void dfs(List<List<int>> adj, int nodo, bool[] vis)
    {
        vis[nodo] = true;
        conta++;
        
        for (int i=0; i<adj[nodo].Count(); i++)
        {
            int v = adj[nodo][i];
            if (vis[v] == false) dfs(adj, v, vis);
        }
    }
    
    
}