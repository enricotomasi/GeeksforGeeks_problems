//{ Driver Code Starts
//Initial Template for Java

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;


class Array {
    
    // Driver code
	public static void main (String[] args) throws IOException{
		// Taking input using buffered reader
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int testcases = Integer.parseInt(br.readLine());
		
		// looping through all testcases
		while(testcases-- > 0){
		    int sizeOfArray = Integer.parseInt(br.readLine());
		    int arr [] = new int[sizeOfArray];
		    
		    String line = br.readLine();
		    String[] elements = line.trim().split("\\s+");
		    for(int i = 0;i<sizeOfArray;i++){
		        arr[i] = Integer.parseInt(elements[i]);
		    }
		    
		    Complete obj = new Complete();
		    arr = obj.Rearrange(arr, sizeOfArray);
		    for(int i=0; i< sizeOfArray;i++){
		        System.out.print(arr[i] + " ");
		    }
		    System.out.println();
		}
	}
}



// } Driver Code Ends


//User function Template for Java

            

class Complete
{
    // Function for finding maximum and value pair
    public static int[] Rearrange (int arr[], int n)
    {
        // Complete the function
        int[] ans = new int[n];
        
        Arrays.sort(arr);
        
        int i=0; 
        int j=0;
        
        while (arr[j] < 0 && j<n-1) j++;
        
        while (i<n)
        {
            while (arr[j] < i && j<n-1) j++;
            if (j >=n) ans[i] = -1;
            else if (arr[j] == i) ans[i] = i;
            else ans[i] = -1;
            
            i++;
        }
        
        return ans;
    }
    
    
}


