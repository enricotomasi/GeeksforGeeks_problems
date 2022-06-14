// { Driver Code Starts
//Initial Template for Javaimport java.io.*;

import java.util.Scanner;

interface in1
{
    void display(int p);
}

class GFG
{
    public static void main (String[] args)
    {
        Scanner sc=new Scanner (System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
        int k= sc.nextInt();
        testClass p = new testClass();
        p.display(k);
        }
    }
}


 // } Driver Code Ends
//User function Template for Java

class testClass implements in1
{
    public void display(int k)
    {   
        // Add your code here.
        int ans = 0;
        for (int i=2; i<=k; i++)
        {
            if (primo(i))
            {
                ans++;            
            }
        }
        System.out.println(ans);
    }
    
    private boolean primo(int n)
    {
        for (int i=2; i<n; i++)   
        {
            if (n%i == 0) return false;
        }
        return true;
    }
    
}

// { Driver Code Starts.
  // } Driver Code Ends