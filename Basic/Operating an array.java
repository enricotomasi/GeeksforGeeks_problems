// { Driver Code Starts
import java.util.Arrays;
import java.util.Scanner;
class Operating{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
			int n=sc.nextInt();
			int[] a=new int[10000];
			Arrays.fill(a,-1);
			for(int i=0;i<n;i++){
				a[i]=sc.nextInt();
			}
			int x = sc.nextInt();
			int y = sc.nextInt();
			int yi = sc.nextInt();
			int z = sc.nextInt();
			GfG g = new GfG();
			boolean b = g.searchEle(a,x);
			if(b==true)
				System.out.print("1 ");
			else
				System.out.print("0 ");
			b = g.insertEle(a,y,yi);
			if(b){
			if(a[yi]==y)
				System.out.print("1 ");
			else
				System.out.print("0 ");
			}
			else
				System.out.print("0 ");
			b = g.deleteEle(a,z);
			if(b){
			if(!g.searchEle(a,z))
				System.out.println("1 ");
			else
				System.out.println("0 ");
			}
			else
				System.out.println("0 ");
		}
	}
}// } Driver Code Ends


/*Complete the function(s) below*/
class GfG
{		
	public boolean debug = false;
	
	public boolean searchEle(int a[],int x)
    {
		//add code here.
		if (debug) System.out.println("\nChiamato metodo searchEle " + x);
		int lungh = a.length;
		for (int i=0; i<lungh; i++) {
		    if (a[i] == x){
		      if (debug) System.out.println("Trovato elemento alla pos: " + i);
		      return true;  
		    } 
		}
		if (debug) System.out.println("Non trovato, ritorno false");
		return false;
	}
	
	public boolean insertEle(int a[],int y,int yi)
    {
        //add code here
        if (debug) System.out.println("\nChiamato metodo insertEle ele: " + y + " in posizione: " + yi);
        int lungh = a.length;
        a[yi] = y;
        for (int i=yi+1; i<lungh-1; i++){
            a[i] = a[i+1];
        }
        
        return true;
	}
	
	public boolean deleteEle(int a[],int z)
    {
		//add code here.
		int lungh = a.length;
		boolean ce = false;
		int indice = 0;
		for (int i=0; i<lungh; i++) {
		    indice = i;
		    ce = true;
		}
		
        if (ce) {
            for (int i=lungh-1; i>indice; i--) {
                a[i-1] = a[i];
            } 
            return true;
        }
        
        
        return false;
	}
	
	
}