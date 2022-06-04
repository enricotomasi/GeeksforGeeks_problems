 
// { Driver Code Starts
//Initial Template for Java




import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String[] inputLine;
            int n = Integer.parseInt(br.readLine().trim());
            int[] arr = new int[n];
            inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            new Solution().immediateSmaller(arr, n);
            for (int i = 0; i < n; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution 
{
    void immediateSmaller(int arr[], int n)
    {
        // code here
        // Per ogni elemento in posizione n controlla l'elemento in posizione n+1
        // Se l'elemento n+1 è più piccolo stampa l'indice
        // altrimenti -1
        // L'ultimo è sempre -1
        
        
        for (int i=0; i<n-1; i++)
        {
            int ele = arr[i];
            int eleDestra = arr[i+1];
            
            if (ele > eleDestra) arr[i] = eleDestra;
            else arr[i] = -1;
        }
        
        arr[n-1] = -1;
        return;
    }
}