 
// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.Scanner;


class GFG {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
         int l,w,h;
         l=sc.nextInt();
         w=sc.nextInt();
         h=sc.nextInt();
         task obj=new task();
         obj.set_length(l);
         obj.set_width(w);
         obj.set_height(h);
         obj.volume();
        }
    }
}


 // } Driver Code Ends
//User function Template for Java

class task
{
    private int l = 0;
    private int w = 0;
    private int h = 0;
    private int volume = 0;
       
    public void set_length(int l)
    {
        //Add your code here.
        this.l = l;
    }
    public void set_width(int w)
    {
        //Add your code here.
        this.w = w;
    }
    public void set_height(int h)
    {
        //Add your code here.
        this.h = h;
    }
    public void volume()
    {
        //Add your code here.
        volume = l*w*h;
        System.out.println(volume);
    }
}

// { Driver Code Starts.
  // } Driver Code Ends